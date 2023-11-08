class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int firstSeen[50000] = {0};
        int lastSeen[50000] = {0};
        int freq[50000] = {0};
        int degree = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(freq[nums[i]]++==0)
            {
                firstSeen[nums[i]]=i;
            }
            lastSeen[nums[i]]=i;
            degree = max(degree,freq[nums[i]]);
        }
        int minn = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]==degree)
            {
                minn = min(minn,lastSeen[nums[i]]+1-firstSeen[nums[i]]);
            }
        }
       return minn;
    }
};