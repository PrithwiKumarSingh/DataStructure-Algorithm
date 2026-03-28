



class Solution {
public:
    bool twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();
        


        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){

            
           int newTarget = target - numbers[i]-numbers[j];
            int start = j+1, end= n-1;

        while(start<=end){
            if(numbers[start] + numbers[end] == newTarget){
                return true;
            }else if(numbers[start] + numbers[end] < newTarget){
                start++;
            }else{
                end--;
            }

        }
    }
}
        return false;
    }
};