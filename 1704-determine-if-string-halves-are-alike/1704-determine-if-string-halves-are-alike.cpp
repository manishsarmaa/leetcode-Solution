class Solution {
public:

bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        return true;
    }
    else{
        return false;
    }
}
    bool halvesAreAlike(string s) {

        int vowel1 = 0 , vowel2=0;
        int n = s.length()/2;

        for(int i = 0 ;i < n ;i++){
            if(isVowel(s[i])){
                vowel1++;
            }
        }
        for(int i = n ;i < s.length();i++){
            if(isVowel(s[i])){
                vowel2++;
            }
        }
        if(vowel1 == vowel2){
            return true;
        }
        else{
            return false;
        }       
    }
};