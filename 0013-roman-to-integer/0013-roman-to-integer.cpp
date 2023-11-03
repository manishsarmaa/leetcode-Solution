class Solution {
public:
    int romanToInt(string s) {
        vector<int>v(128);
        int ans=0;
        v['I'] = 1;
        v['V'] = 5;
        v['X'] = 10;
        v['L'] = 50;
        v['C'] = 100;
        v['D'] = 500;
        v['M'] = 1000;
        for(int i =0;i<s.size();i++)
        {
            if(v[s[i]]<v[s[i+1]])
            {
                ans=ans+v[s[i+1]]-v[s[i]]-v[s[i+1]];
            }
            else
            {
                ans+=v[s[i]]+v[s[i+1]]-v[s[i+1]];
            }
        }
    return ans;
    }
};