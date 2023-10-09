class Solution {
public:
    int findLastOccurrence(vector<int>nums ,int target)
   {
    int  s= 0, e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if ((mid == nums.size()- 1 || nums[mid + 1] > target) && nums[mid] == target)
            return mid;
        else if (target < nums[mid])    
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int findFirstOccurrence(vector<int>nums, int target)
{
    int s = 0, e = nums.size()- 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if ((mid == 0 || nums[mid - 1] < target) && nums[mid] == target)
            return mid;
        else if (target > nums[mid])    
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
    vector<int> searchRange(vector<int>& nums, int target) 
{
     vector<int> firstLast = {-1, -1};
    firstLast[0] = findFirstOccurrence(nums, target);
    firstLast[1] = findLastOccurrence(nums, target);
    return firstLast;
}
};