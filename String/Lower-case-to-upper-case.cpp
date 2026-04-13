//   https://www.geeksforgeeks.org/problems/lower-case-to-upper-case3410/1
//  (eassy)

string to_upper(string str) {
    // code
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = 'A' + (str[i]-'a');
        }
    }
    return str;
}


string to_upper(string str) {
    // code
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i]-32;
        }
    }
    return str;
}