for(int i=0;i<nums.size();i++)
{
  if(nums[i]<0)
  {
    swap(imin,imax);
  }
  imax=max(nums[i],nums[i]*imax);
  imin=min(nums[i],nums[i]*imin);
  res=max(res,imax);
}
return res;
