        int majority = nums[0], counter = 1;
        for(int i = 1; i < nums.length; i++) {
            if(counter == 0) {
                majority = nums[i];
                count = 1;
            } else if(nums[i] == majority) counter++;
            else counter--;
        }
        return majority;
