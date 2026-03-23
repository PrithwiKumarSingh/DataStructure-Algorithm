# 📘 Data Structures & Algorithms

<details open>
  <summary><b>🔍 Binary Search</b></summary>

  <br>

  <details>
    <summary><b>🟢 Easy</b></summary>

  - [ ] **First and Last Occurrence (Leftmost & Rightmost Index)**
  - [ ] **Search Insert Position**
  - [ ] **Rotation Count in Sorted Array (Find K-th Rotation)**
  - [ ] **Sqrt(x)**

  </details>

  <details>
    <summary><b>🟡 Medium</b></summary>

  - [ ] **Peak Index in a Mountain Array**
  - [ ] **Find Smallest Missing Element in Sorted Array**
  - [ ] **Find Minimum in Rotated Sorted Array**
  - [ ] **Search in Rotated Sorted Array**

  </details>

  <br>

  <details>
    <summary><b>🧠 Binary Search Patterns</b></summary>

  #### 🔹 Classic Binary Search
  - Search Insert Position  
  - First & Last Occurrence  

  #### 🔹 Binary Search on Answer
  - Sqrt(x)  
  - Smallest Missing Element  

  #### 🔹 Rotated Sorted Array
  - Rotation Count  
  - Find Minimum  
  - Search in Rotated Array  

  #### 🔹 Peak / Bitonic Problems
  - Peak Index in Mountain Array  

  </details>

  <br>

  <details>
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