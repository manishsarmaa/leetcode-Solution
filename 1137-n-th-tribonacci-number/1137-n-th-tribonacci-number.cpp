class Solution {
public:
    int tribonacci(int n) {
       int zero=0,first=1,second=1;
        if(n==0) return zero;
       if(n==1) return first; 
       if(n==2) return second;
        int num;
        for(int i=3;i<=n;i++){
            num=zero+first+second;
            zero=first;
            first=second;
            second=num;
        }
        return num;
    }
};