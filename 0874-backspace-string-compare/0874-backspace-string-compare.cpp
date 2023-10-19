class Solution {
public:
    string bs(string s){
        if (s.empty())return s;
        string ans;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='#'){
                if (!ans.empty())ans.pop_back();
            }
            else ans.push_back(s[i]);
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        return (bs(s)==bs(t));
    }
};