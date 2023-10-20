class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      string sub = s + s;
      string check = sub.substr(1, sub.size()-2);
      if(check.find(s)!=-1){
          return true;
      }
      return false;
    }
};