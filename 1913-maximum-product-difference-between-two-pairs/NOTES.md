First SORT The Array And Then Store The Multiple of First And Second Element Of Array In A Variable And Then Store The Multiple of Last And Last Second Element Of Array In A Another Variable And Then Store The Subtraction Of Those Variable And Return The Ans

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int a,i=0;
            a=nums[i]*nums[i+1];   
        int j=nums.size()-1;
        int b=0;
        b=nums[j]*nums[j-1];
        int ans=0;
        ans=b-a;
        return ans;
    }
};​
