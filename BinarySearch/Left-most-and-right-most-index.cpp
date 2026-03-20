// https://www.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1
// Eassy Porblems
//

class Solution {
public:
  pair<long, long> indexes(vector<long long> v, long long x) {
    // code here

    int n = v.size();

    int start = 0, end = n - 1, leftIndex = -1;

    // for the left index finding
    while (start <= end) {
      int mid = start + (end - start) / 2;

      if (v[mid] == x) {
        leftIndex = mid;
        end = mid - 1;
      } else if (v[mid] < x) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }

    // for the right index finding
    int rightIndex = -1;
    start = 0, end = n - 1;

    while (start <= end) {
      int mid = start + (end - start) / 2;

      if (v[mid] == x) {
        rightIndex = mid;
        start = mid + 1;

      } else if (v[mid] > x) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }

    return {leftIndex, rightIndex};
  }
};
