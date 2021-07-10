class Solution {
public:
    int hIndex(vector<int>& citations) {
        // 3, 1, 1
        sort(citations.begin(), citations.end(), [] (int a, int b) {
            return a>b;
        });
        
        int lo = 0, hi = citations.size();
        while(lo<hi) {
            int mid = lo + (hi-lo)/2;
            if(citations[mid] > mid)
                lo = mid+1;
            else if(citations[mid] == mid)
                return mid;
            else
                hi = mid;
        }
        return lo;
    }
};

