class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
              vector<int> temp(n+1,0);
        for(int i=0;i<trust.size();i++){
            temp[trust[i][0]]--;
            temp[trust[i][1]]++;
        }
        for(int i=1;i<n+1;i++){
            if(temp[i]==n-1){
                return i;
            }
        }
        return -1;
  
    }
};