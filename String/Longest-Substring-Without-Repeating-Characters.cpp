//   https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
//   ( Medium )


// brute force approach   TC-> O(n2)  SC-> O(1);
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int len = 0, maxlen = 0;

        for(int i=0; i<n; i++){
            vector<int> hash (256, -1);
            for(int j=i; j<n; j++){
                if(hash[s[j]] != -1)
                    break;
                else{
                    len = j - i + 1;
                    maxlen = max(len, maxlen);
                    hash[s[j]] = 1;
                }
            }
        }
        return maxlen;
    }
};


// Optomize using two pointer also called Sliding Window concept  TC-> O(n)  SC-> O(1);

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, n = s.size();
        int answere = 0;

        int freq[256] = {0};

        while(end<n){

            // jis character pe main hu, kay wo mere current window mein present to nahi hai , agar hai usko hatao
            while(freq[s[end]]){
                freq[s[start]] = 0;
                start++;
            }

            freq[s[end]] = 1;
            end++;

            answere = max(answere, end-start);
        }

        return answere;
        
    }
};