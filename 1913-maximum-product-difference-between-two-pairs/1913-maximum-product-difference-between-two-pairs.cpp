class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int a=0;
        int i=0;
            a=nums[i]*nums[i+1];   
        int j=nums.size()-1;
        int b=0;
        b=nums[j]*nums[j-1];
        int ans=0;
        ans=b-a;
        return ans;
    }
};