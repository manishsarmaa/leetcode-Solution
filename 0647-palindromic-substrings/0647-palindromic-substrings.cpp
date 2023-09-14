class Solution {
public:
    int expandindex(string s, int left,int right)
    {
        int count=0;
        while(left>=0 && right<s.length() && s[left]==s[right])
        {
            count++;
            left--;
            right++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        int n=s.length();

        for(int centre=0;centre<n;centre++)
        {
            int oddkans=expandindex(s,centre,centre);
            count=count+oddkans;

            int evenkans=expandindex(s,centre,centre+1);
            count=count+evenkans;
        }
        return count;
    }
};