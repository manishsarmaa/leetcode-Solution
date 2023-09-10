class Solution {
public:
    // int strlen(string s)
    // {
    //     int i=0;
    //     int length=0;
    //     while(s[i]!='\0')
    //     {
    //         length++;
    //         i++;
    //     }
    //     return length;
    // }

    bool isPalindrome(string s) {
       int i=0;
        int n=s.size();
        int j=n-1;
        while(i<=j)
        { 
           if(!isalnum(s[i])){
                i++;
            }
            else if (!isalnum(s[j])){
                j--;
            }
            else if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true; 
    }
};