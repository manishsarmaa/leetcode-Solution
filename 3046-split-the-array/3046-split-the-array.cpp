class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(101,0);
        for(int i=0;i<n;i++){
            v[nums[i]]++;
            int fre=v[nums[i]];
            if(fre>2) return false;
        }
        return true;
    }
};