class Solution {
public:
    string firstPalindrome(vector<string>& words) {
    string ans, tmp;
       for(int i=0; i<words.size();i++){
        ans=words[i];
        tmp=ans;
        reverse(tmp.begin(), tmp.end());
        if(tmp==ans){
            return ans;
        }
    }
   return "";
    }
};