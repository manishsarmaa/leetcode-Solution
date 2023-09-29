class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool a=false,b=false;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            a=true;
            else if(nums[i+1]>nums[i])
            b=true;
            if(a==true & b==true)
            return false;
        }
        return true;
    }
};