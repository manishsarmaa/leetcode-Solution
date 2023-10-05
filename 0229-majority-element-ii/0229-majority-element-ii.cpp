class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int prob = floor(n/3);
        for(auto i : nums){
            mp[i]++;
        }
        vector<int> ans;
        for(auto i : mp){
            if(i.second>prob) ans.push_back(i.first);
        }
        return ans;

        // vector<int>ans;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //   if (ans.size() == 0 || ans[0] != nums[i]) {
        //     int cnt = 0;
        //      for (int j = 0; j < n; j++) {
        //         if (nums[j] == nums[i]) {
        //             cnt++;
        //         }
        //     }
        //    if (cnt > (n / 3))
        //     ans.push_back(ans[i]);
        // } 
        // if (ans.size() == 2) break;
        // }
        // return ans;
    }
};