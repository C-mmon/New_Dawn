class MedianFinder {
public:
    /** initialize your data structure here. */
    //we define two heaps large and the small 
    //two priority queue to store to half of the number 
    
    priority_queue <long> small, large;
    MedianFinder() {
        
    }
    //priority queue store the least number in the root node 
    //if we negate every number before pushing it to the array
    //we are just storing it the in the reverse order, if get their absolute value 
    //all the number in the heap small is smaller than the value of large heap 
    
    void addNum(int num) 
    {
        
        //encountering the first number
        small.push(num);
        //whenever we encounter an element, we dont know in which part it may fit
        //is it fit for the left the smaller or the larger, we don't know 
        //what we do is, we insert element into smaller one 
        //and take out the larger value from the smaller one
        //this are the following cases 
        //number maybe larger than the top value 
        //for example top 5 inserted number 6 
        //hence top will change to 6 
        //and when we pop the element out we will get 6
        //another case when we insert 6 
        //in this way we are always assured the top will adjust and the order is maintained
        
        large.push(-(small.top()));
        small.pop();
        //why need for this 
        //everytime you perform insertion operation think about this
        //[1,2,3][4,5]
        //inserting element in large we are not taking care of small
        //hence here comes our hero, we know the fact that small will only contain that half of the element which are smaller
        if(small.size()<large.size())
        {
            small.push(-large.top());
            large.pop();
        }
        
    }
    
    double findMedian() 
    {
        //[1,2,3][4,5] median would be present in the smaller part of the array
        //[1,2,3,4,5,6] median would be 3 and 4 
        
        
        return small.size()>large.size()?small.top():(small.top()-large.top())/2.0;
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
