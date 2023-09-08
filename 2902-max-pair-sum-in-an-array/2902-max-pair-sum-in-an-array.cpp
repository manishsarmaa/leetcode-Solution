class Solution {
public:
    int large(int num) {
        int m = 0;
        while (num > 0) {
            m = max(m, num % 10);
            num /= 10;
        }
        return m;
    }

    int maxSum(vector<int>& nums) {
        int n= nums.size();
       int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a= nums[i],b =nums[j];
                if(large(a)==large(b)){
                    ans = max(a+b,ans);
                }
            }
        }
        return ans;
    }

};