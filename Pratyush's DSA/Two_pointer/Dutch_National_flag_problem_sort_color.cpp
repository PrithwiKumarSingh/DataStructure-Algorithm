#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
            else if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++; 
                mid++;
            }else{
                mid++;
            }
        }
    }
};

int main(){
    vector<int> nums = {2,1,0,2,1,1,2};
     Solution obj;
     obj.sortColors(nums);

     for(int x : nums){
        cout<< x << " ";
     }

     cout<<endl;
}

