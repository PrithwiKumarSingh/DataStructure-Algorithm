// https://leetcode.com/problems/search-insert-position/
// Eassy Porblems

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int n = nums.size();

    int start = 0, end = n - 1, index;

    while (start <= end) {
      int mid = start + (end - start) / 2;

      if (nums[mid] == target) {
        return mid;
      } else if (nums[mid] < target) {
        start = mid + 1;
      } else {
        index = mid;
        end = mid - 1;
      }
    }
    return index;
  }
};
