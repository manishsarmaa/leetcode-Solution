class Solution {
public:
    int smooth(vector<vector<int>>& img, int x, int y){
        int m=img.size();
        int n=img[0].size();
        int sum=0;
        int count=0;

   //loop will traverse all 9 valid indexes of the 3*3 matrix
           for(int i=-1; i<=1; i++)
            for(int j=-1; j<=1; j++){
                int xIdx=x+i;
                int yIdx=y+j;
                if(xIdx>=0 && yIdx>=0 && xIdx<m && yIdx<n){
                   sum+=img[xIdx][yIdx];
                   count++;
                } 
            }

            return sum/count;
    }
    
     vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
               
        int m=img.size();
        int n=img[0].size(); 
        vector<vector<int>> ans(m , vector<int>(n,0));//initiallised a vector array with 0

        for(int i=0; i< img.size(); i++){
           for(int j=0; j<img[0].size();j++){
           ans[i][j]=smooth(img,i,j);
        }
        }
      return ans;    
    }

};
