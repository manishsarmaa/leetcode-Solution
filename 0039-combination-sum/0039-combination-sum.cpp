class Solution {
public:

void combinnationhelper(vector<int>&candidates,int target,vector<int>&v,vector<vector<int>>&ans,int index){
    if(target==0){
        ans.push_back(v);
        return;
    }
    if(target<0)
    return;

    for(int i=index;i<candidates.size();i++){
        v.push_back(candidates[i]);
        combinnationhelper(candidates,target-candidates[i],v,ans,i);
        v.pop_back();
    }
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        combinnationhelper(candidates,target,v,ans,0);
        return ans;
    }
};