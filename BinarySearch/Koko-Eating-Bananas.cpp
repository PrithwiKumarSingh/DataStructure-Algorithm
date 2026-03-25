//  https://leetcode.com/problems/koko-eating-bananas/description/
// Medium 

class Solution {
public:
    bool isEatingBananaPossible(int maxSpeed, vector<int> piles, int h){
        int totalTime = 0; 
        for(int i=0; i<piles.size(); i++){
            totalTime += piles[i]/maxSpeed;
            if(piles[i]%maxSpeed){
                totalTime++;
            }
        }
        return totalTime<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();

        int start = 1, ans;
        long long end = 0; 

        for(int i=0; i<n ; i++){
            end += piles[i];
        }

        while(start<=end){
            long long  mid = start + (end-start)/2;

            if(isEatingBananaPossible(mid, piles, h)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
        
    }
};