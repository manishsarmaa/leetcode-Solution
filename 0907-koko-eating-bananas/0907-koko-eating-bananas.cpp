class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s = 1;
        int e = *max_element(piles.begin(),piles.end());

        while(s<=e){

            long long Eat_time = 0;
            int m = s+(e-s) / 2;

            for(auto element : piles){
                if(element<m) 
                Eat_time++;
                else if(element % m == 0) 
                Eat_time += (element/m);
                else Eat_time += (element/m) + 1;
            }
            if(Eat_time <= h) e = m - 1;
            else s = m + 1;
        }
        return s;
    }
};