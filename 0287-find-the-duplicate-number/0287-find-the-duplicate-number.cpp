class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //positoning method
        while(nums[0]!=nums[nums[0]])
        {
            swap(nums[0],nums[nums[0]]);

        }
        return nums[0];

    }
};