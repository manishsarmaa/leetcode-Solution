class Solution {
public:
    bool check(vector<int>& nums) {
      int n=nums.size();
      int start=0,end=n-1,count=0;
      for(int i=0;i<end;i++){
          if(nums[i]>nums[i+1])
            count++;
      }
        if(nums[start]<nums[end])
         count ++;

         return count<=1;
    }
};