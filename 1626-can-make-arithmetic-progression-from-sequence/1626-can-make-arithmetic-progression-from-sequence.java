class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
       int n=arr.length;
       Arrays.sort(arr);
       for(int i=1;i<n-1;i++)
       {   int ans=arr[0]-arr[1];
           if(ans!=arr[i]-arr[i+1]) return false;
       } 
       return true;
    }
}