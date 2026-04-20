

class Solution {
public:
    string sortSentence(string s) {
        vector<string> str(10);
        string word = " "; 

        for(int i=0; i<s.size(); i++){
            
            if(s[i]>='1' && s[i] <= '9'){
                int index = s[i]-'0';
                str[index] = word;
                word.clear();
            }else{
                word.push_back(s[i]);
            }
        }