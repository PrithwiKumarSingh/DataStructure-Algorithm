//  https://www.geeksforgeeks.org/problems/sort-a-string2943/1
//   ( Eassy )

string sort(string s) {
    // complete the function here
    int n = s.size();
    
    vector<int>count(26,0);
    
    for(int i=0; i<n; i++){
        count[s[i]-'a']++;
    }
    
    string str; 
    
    for(int i=0; i<count.size(); i++){
        char c = 'a' + i;
        
        while(count[i]){
            str.push_back(c);
            count[i]--;
        }
        
    }
    return str;
    
    }