# 🧠 Data Structures & Algorithms

> A curated problem set with templates, difficulty tiers, and solutions — built for consistent interview prep.

---

## 📚 Table of Contents

- [Binary Search](#-binary-search)
- [2D Arrays](#-2d-arrays)

---

## 🔍 Binary Search

Binary search runs in **O(log n)** and applies far beyond sorted arrays — think answer-space searches, rotated arrays, and optimization problems.

### 🧩 Template

```cpp
int binarySearch(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }

    return -1;
}
```

### 🟢 Easy

| # | Problem | Status |
|---|---------|--------|
| 1 | First and Last Occurrence (Leftmost & Rightmost Index) | ⬜ |
| 2 | Search Insert Position | ⬜ |
| 3 | Rotation Count in Sorted Array (Find K-th Rotation) | ⬜ |
| 4 | Sqrt(x) | ⬜ |
| 5 | Kth Missing Positive Number | ⬜ |
| 6 | Pair With Difference | ⬜ |
| 7 | Split an Array into Two Equal Sum Subarrays | ⬜ |
| 8 | Equal Sum | ⬜ |
| 9 | Maximum Difference Between Increasing Elements | ⬜ |
| 10 | Maximum Prefix Sum for a Given Range | ⬜ |

### 🟡 Medium

| # | Problem | Status |
|---|---------|--------|
| 1 | Peak Index in a Mountain Array | ⬜ |
| 2 | Find Smallest Missing Element in Sorted Array | ⬜ |
| 3 | Find Minimum in Rotated Sorted Array | ⬜ |
| 4 | Search in Rotated Sorted Array | ⬜ |
| 5 | Allocate Minimum Pages | ⬜ |
| 6 | Capacity To Ship Packages Within D Days | ⬜ |
| 7 | Koko Eating Bananas | ⬜ |
| 8 | Aggressive Cows | ⬜ |
| 9 | Magnetic Force Between Two Balls | ⬜ |
| 10 | Two Sum II — Input Array Is Sorted | ⬜ |
| 11 | Three Sum | ⬜ |
| 12 | Four Sum | ⬜ |
| 13 | Product Pair | ⬜ |
| 14 | Kadane's Algorithm / Maximum Subarray | ⬜ |

### 🔴 Hard

| # | Problem | Status |
|---|---------|--------|
| 1 | The Painter's Partition Problem II | ⬜ |
| 2 | Split Array Largest Sum | ⬜ |
| 3 | Trapping Rain Water | ⬜ |

---

## 🗺️ 2D Arrays

Staircase search on a sorted matrix runs in **O(m + n)** — start top-right, eliminate a row or column each step.

### 🧩 Template

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0;
    int col = matrix[0].size() - 1;

    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] > target) col--;
        else row++;
    }

    return false;
}
```

### 🟢 Easy

| # | Problem | Status |
|---|---------|--------|
| 1 | Transpose Matrix | ⬜ |

### 🟡 Medium

| # | Problem | Status |
|---|---------|--------|
| — | *Coming soon* | — |

### 🔴 Hard

| # | Problem | Status |
|---|---------|--------|
| — | *Coming soon* | — |

---

## 📊 Progress Tracker

| Topic | Easy | Medium | Hard | Total |
|-------|------|--------|------|-------|
| Binary Search | 0 / 10 | 0 / 14 | 0 / 3 | 0 / 27 |
| 2D Arrays | 0 / 1 | 0 / 0 | 0 / 0 | 0 / 1 |
| **Total** | **0 / 11** | **0 / 14** | **0 / 3** | **0 / 28** |

---

## 🚀 How to Use

1. **Pick a topic** from the table of contents.
2. **Study the template** to internalize the core pattern.
3. **Solve problems** in order — easy → medium → hard.
4. **Mark complete** by replacing `⬜` with `✅` as you go.

---

## 🛠️ Languages Used

![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=cplusplus&logoColor=white)

---

## 📄 License

This repository is for personal learning and interview preparation. Feel free to fork and adapt.