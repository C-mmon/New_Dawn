
    int highest, lowest;
    highest = lowest = scores[0];
    vector <int> result (2,0);
    
    
    
    for (int s_i = 1; s_i < scores.size(); s_i++)
    {
        if (scores[s_i] > highest)
        {
            highest = scores[s_i];
            ++result[0];
        }
        else if (scores[s_i] < lowest)
        {
            lowest = scores[s_i];
            ++result[1];
        }
    }
    
    return result;
