class Solution {
public:
    int find(vector<int>& arr){
        int s = 0 , e = arr.size()-1;
        int n = arr.size();
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid]<0){
                n = mid; 
                e = mid - 1;
            }
            else 
            s = mid+1;
        }
        return arr.size()-n;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            ans+=find(grid[i]);
        }
        return ans;
    }
};