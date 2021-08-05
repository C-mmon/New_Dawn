
        	int maxsum = INT_MIN;
	int currsum = 0;

	for (auto  n : nums) 
    {

		currsum += n;
		maxsum = max(currsum, maxsum);

		if (currsum < 0)
			currsum = 0;
	}

	return maxsum;        
        
