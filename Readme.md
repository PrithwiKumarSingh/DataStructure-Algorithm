# 📘 Data Structures & Algorithms

<details>
  <summary><b>🔍 Binary Search</b></summary>

  <br>

  <details>
    <summary><b>🟢 Easy</b></summary>

  - [ ] **First and Last Occurrence (Leftmost & Rightmost Index)**
  - [ ] **Search Insert Position**
  - [ ] **Rotation Count in Sorted Array (Find K-th Rotation)**
  - [ ] **Sqrt(x)**
  - [ ] **Kth Missing Positive Number**
  - [ ] **Pair With Difference**

  </details>

  <details>
    <summary><b>🟡 Medium</b></summary>

  - [ ] **Peak Index in a Mountain Array**
  - [ ] **Find Smallest Missing Element in Sorted Array**
  - [ ] **Find Minimum in Rotated Sorted Array**
  - [ ] **Search in Rotated Sorted Array**
  - [ ] **Allocate Minimum Pages**
  - [ ] **Capacity To Ship Packages Within D Days**
  - [ ] **Koko Eating Bananas**
  - [ ] **Aggressive Cows**
  - [ ] **Magnetic Force Between Two Balls**
  - [ ] **Two Sum II - Input Array Is Sorted**
  - [ ] **Three Sum**
  - [ ] **Four Sum**
  - [ ] **Product Pair**


  </details>

  <details>
    <summary><b>🟡 Hard</b></summary>

  - [ ] **The Painter's Partition Problem-II**
  - [ ] **Split Array Largest Sum**

  </details>

    <summary><b>🧩 Template</b></summary>

```cpp
int binarySearch(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end-start) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }

    return -1;
}