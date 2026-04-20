//  https://leetcode.com/problems/sorting-the-sentence/

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

        string ans; 
        for(int i=1; i<str[1].size(); i++){
            ans.push_back(str[1][i]);
        }
        for(int i=2; i<10; i++){
            if(str[i].size()==0){
                break;
            }
            ans += str[i];
        }

        return ans;
    }
};