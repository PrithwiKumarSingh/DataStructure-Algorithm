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
  - [ ] **Split an array into two equal Sum subarrays**
  - [ ] **Equal Sum**
  - [ ] **Maximum Difference Between Increasing Elements**
  - [ ] **Maximum prefix sum for a given range**


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
  - [ ] **Kadane's Algorithm && Maximum Subarray**


  </details>

  <details>
    <summary><b>🔴 Hard</b></summary>

  - [ ] **The Painter's Partition Problem-II**
  - [ ] **Split Array Largest Sum**
  - [ ] **Trapping Rain Water**

  </details>
<details>
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
```
</details>

</details>

<details>
  <summary><b> 🧮 2D Array (Matrix)</b></summary>

A collection of important **2D Array / Matrix problems** categorized by difficulty.

---
<details>
<summary><b>🟢 Easy </b></summary>

- [ ] Addition of two square matrices

</details>


<details>
<summary><b>🟡 Medium </b></summary>

- [ ] Transpose Ma

</details>

<details>
<summary><b>🔴 Hard </b></summary>

- [ ] Transpose Matrix  

</details>


<details>
<summary><b>🧩 Basic Matrix Template</b></summary>

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3, m = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Traversal
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

    return -1;
}
```

</details>

