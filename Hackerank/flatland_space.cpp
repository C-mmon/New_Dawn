int flatlandSpaceStations(int n, vector<int> c) 
{
    //sort the array 
     sort(c.begin(),c.end());
     
     //assume the max distance 
     int max_distance=c[0];
     for(int i=1;i<c.size();i++)
     {
         int distance=(c[i]-c[i-1])/2;
         if(distance>max_distance)
         {
             max_distance=distance;
         }
     }
         int lastGap = (n-1) - c[c.size() - 1];
    return (lastGap < max_distance) ? max_distance : lastGap;
        
return  max_distance;

}
