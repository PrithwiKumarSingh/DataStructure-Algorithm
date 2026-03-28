//   https://leetcode.com/problems/magnetic-force-between-two-balls/description/
//  ( Medium )


class Solution {
public:

    bool isPossibleDistribution(int maxForce, vector<int>& position, int m){
        int count = 1, ballPosition = position[0];

        for(int i=1; i<position.size(); i++){
            if(position[i]-ballPosition >= maxForce){
                count ++ ; 
                ballPosition = position[i];
            }
        }
        return count >= m;
    }

    int maxDistance(vector<int>& position, int m) {

        int start = 1, n = position.size(), ans; 

        sort(position.begin(), position.end());
        int end = position[n-1]-position[0];

        while(start<=end){
            int mid = (start+end) >> 1;

            if(isPossibleDistribution(mid,position, m)){
                ans  = mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans;
        
    }
};