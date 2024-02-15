class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       double kl= celsius + 273.15;
       double fahren= celsius * 1.80 + 32.00;

        vector<double>ans;
        ans.push_back(kl);
        ans.push_back(fahren); 
        return ans;
    }
};