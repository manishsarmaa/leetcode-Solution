class Solution {
public:
    int firstUniqChar(string s) 
    {  
        for(int i=0;i<s.length();i++)
        {
            int count = 1;
            for(int j=0;j<s.length();j++)
            {
                if(i!=j && s[i] == s[j])
                {
                    count = 0;
                    break;
                }
            }  
            if(count == 1)
                return i;
        }
        return -1;
    }
};