class Solution {
    public int lengthOfLastWord(String s) {
        int n=s.length() -1;
        int ans=0;
        for(int i=n;i>=0;i--){
          if(s.charAt(i)==' ' && ans>0)
           return ans;

           if(s.charAt(i)!=' ')
            ans++;
        }
        return ans;        
    }
}