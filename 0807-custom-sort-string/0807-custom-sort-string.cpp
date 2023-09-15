class Solution {
public:
    string customSortString(string order, string s) {
vector<int> bucketArray(26, 0);

  for (int i = 0; i < s.length(); i++)
  bucketArray[s[i] - 'a']++;
 
  string finAns;
 for (int i = 0; i < order.length(); i++){
 while (bucketArray[order[i] - 'a'] >= 1)
{
 finAns += order[i];
 bucketArray[order[i] - 'a']--;
}
 }
  for (int i = 0; i < s.length(); i++)
{
 while (bucketArray[s[i] - 'a'] >= 1)
 {
  finAns += s[i];
  bucketArray[s[i] - 'a']--;
 }
}
return finAns;
}   
};