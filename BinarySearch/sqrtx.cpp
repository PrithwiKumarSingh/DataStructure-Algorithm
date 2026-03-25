//  https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {

        if(x<=1) 
        return x;

        int start=0, end = x, squre;
        while(start<=end){
            
            int mid = (start+end) >> 1;
            if(mid == x/mid){
                return mid;
            }
            else if(mid > x/mid){
                end = mid-1;
            }else{
                start = mid+1;
                squre = mid;0
            }
        }
        return squre;
        
    }
};

int main(){
    Solution s;
    s.mySqrt(8);

}

