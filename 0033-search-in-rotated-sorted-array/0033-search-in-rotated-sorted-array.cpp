class Solution {
public:
    int binarySearch(vector<int>arr,int target,int start, int end)
    {
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            int element=arr[mid];

            if(element==target)
            {
                return mid;
            }
            if (target< element)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
int findpivot(vector<int>arr) {
        int s=0;
        int e=arr.size()-1;
        int m=s+(e-s)/2;
       while(s<e)
        {
         if(m+1<arr.size() && arr[m]>arr[m+1] )
            {
                return m;
            }
            if(m-1>=0 && arr[m-1]>arr[m])
            {
                return m-1;
            }    
            if(arr[s]>=arr[m])
            {
                e=m-1;
            }
            else
             s=m;
              m=s+(e-s)/2;
        }
        return s;
}



    int search(vector<int>& nums, int target) {
        int pivotindex=findpivot(nums);

        if(target>=nums[0] && target<=nums[pivotindex])
        {
            int ans=binarySearch(nums,target,0,pivotindex);
            return ans;
        }    

    if(pivotindex+1<nums.size() && target>=nums[pivotindex+1] && target<=nums[nums.size()-1])
        {
            int ans=binarySearch(nums,target,pivotindex+1,nums.size()-1);
            return ans;
        }
        return -1;
    }
};