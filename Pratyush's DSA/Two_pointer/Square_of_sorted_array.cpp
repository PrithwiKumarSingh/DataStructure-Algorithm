// https://leetcode.com/problems/squares-of-a-sorted-array/

// Time Complexity = O(n)
// Space Complexity = O(1)


class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {

            vector<int> pos; 
            vector<int> neg;

            // split the array into two part negative and positive array
            for(int i=0; i<arr.size(); i++){
                if(arr[i]>= 0){
                    pos.push_back(arr[i]);
                }else{
                    neg.push_back(arr[i]);
                }
            }

            // when only positive array
            if(neg.size() == 0){
                for(int i=0; i<pos.size(); i++){
                    pos[i] = pos[i] * pos[i] ; 
                }
                return pos;
            }

            // when only negative array
            if(pos.size()==0){
                for(int i=0; i<neg.size(); i++){
                    neg[i] = neg[i] * neg[i]; 
                }
                reverse(neg.begin(), neg.end());
                return neg;
            }

            // contain both negative & positive 

            // square the negative array and reverse it.
            for(int i=0; i<neg.size(); i++){
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin(), neg.end());

            // square the positive array 
            for(int i=0; i<pos.size(); i++){
                pos[i] = pos[i] * pos[i];
            }

            // merge the both array positive and negative
            
            int i = 0, j = 0, id = 0; 
            int n = neg.size(), m = pos.size();
            vector<int> res(n+m);

            while(i < n && j < m){

                if(neg[i] <= pos[j]){
                    res[id] = neg[i];
                    id++;
                    i++;
                }else{
                    res[id] = pos[j]; 
                    j++; 
                    id++;
                }
            }

            // for remain negative part
            while(i<n){
                res[id] = neg[i]; 
                id++; 
                i++;
            }

            // when remain positive part
            while(j<m){
                res[id] = pos[j]; 
                id++; 
                j++;
            }
        return res;
    }
};