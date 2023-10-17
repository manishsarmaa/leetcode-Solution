class Solution {
public:
    char repeatedCharacter(string s) {

    int minimum=INT_MAX;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                minimum=min(minimum,j);
            }
        }
    }
    return s[minimum];
    }
};