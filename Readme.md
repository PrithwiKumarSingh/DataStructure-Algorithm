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

  </details>

  <details>
    <summary><b>🟡 Medium</b></summary>

  - [ ] **Peak Index in a Mountain Array**
  - [ ] **Find Smallest Missing Element in Sorted Array**
  - [ ] **Find Minimum in Rotated Sorted Array**
  - [ ] **Search in Rotated Sorted Array**

  </details>

    <summary><b>🧩 Template</b></summary>

```cpp
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}