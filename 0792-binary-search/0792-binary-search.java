class Solution {
    public int search(int[] nums, int target) {
      int s=0;
      int e=nums.length-1;
      int m=s+(e-s)/2;
      int ans=-1; 
      while(s<=e)
      {
          if(nums[m]==target)
          {
              ans=m;
              e=m-1;
          }
          else if(target<nums[m])
          {
              e=m-1;
          }
          else if(target>nums[m])
          {
              s=m+1;
          }
          m=s+(e-s)/2;
      }  
      return ans;
    }
}