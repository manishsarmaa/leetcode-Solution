class Solution {
    public boolean isPossibleToSplit(int[] nums) {
         int[] freq = new int[101];
        for(int n : nums){
            freq[n]++;
            if(freq[n] > 2) return false;
        }
        return true;
    }
}