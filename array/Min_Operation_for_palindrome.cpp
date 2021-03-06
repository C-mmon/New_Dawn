int findMin(int arr[], int n)
{
    // stores the minimum number of merge operations needed
    int count = 0;
 
    // `i` and `j` initially points to endpoints of the array
    int i = 0, j = n - 1;
 
    // loop till the search space is exhausted
    while (i < j)
    {
        if (arr[i] < arr[j])
        {
            // merge item at i'th index with the item at (i+1)'th index
            arr[i + 1] += arr[i];
            i++, count++;
        }
        else if (arr[i] > arr[j])
        {
            // merge item at (j-1)'th index with the item at j'th index
            arr[j - 1] += arr[j];
            j--, count++;
        }
        // otherwise, ignore both the elements
        else {
            i++, j--;
        }
    }
 
    return count;
}
