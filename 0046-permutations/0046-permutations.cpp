class Solution {
public:
    void helper(vector<int>&ds,vector<vector<int>>& ans,vector<int>& nums,vector<int> &vis){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(!vis[i]){
                ds.push_back(nums[i]);
                vis[i] = 1;
                helper(ds,ans,nums,vis);
                vis[i] = 0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> ds;
        vector<vector<int>> ans;
        vector<int> vis(n,0);
        helper(ds,ans,nums,vis);

        return ans;
    }
};