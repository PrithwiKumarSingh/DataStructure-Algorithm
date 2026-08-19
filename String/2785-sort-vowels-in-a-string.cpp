class Solution {
public:
  string sortVowels(string s) {
    string vowel = "AEIOUaeiou";
    vector<int> freq(10, 0);

    for (int i = 0; i < s.size(); i++) {
      int idx = vowel.find(s[i]);

      if (idx != string::npos) {
        freq[idx]++;
      }
    }

    string ans;
    for (int i = 0; i < s.size(); i++) {
      int idx = vowel.find(s[i]);

      if (idx != string::npos) {
        for (int j = 0; j < 10; j++) {
          if (freq[j]) {
            ans += vowel[j];
            freq[j]--;
            break;
          }
        }

      } else {
        ans += s[i];
      }
    }

    return ans;
  }
};

// Time Complexity  -> O(n);
// Space Complexity -> O(1);
