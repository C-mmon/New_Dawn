    Create a min-heap using priority queue, insert all the length with negation inside the min-heap
    Do following while the number of elements in min-heap is not one. 
        Extract the minimum and second minimum from min-heap
        Negate them 
        Add the above two extracted values and insert the added value to the min-heap again using negation
        Maintain a variable for total cost and keep incrementing it by the sum of extracted values.
    Return the value of this total cost.
          
      
