# Rotate Image

## Problem Statement
You are given an `n x n` 2D matrix representing an image.  
Rotate the image by **90 degrees clockwise**, in place.  

- The rotation must be done **in-place**, meaning no extra 2D matrix allocation.  
- Only modify the input matrix directly.

---

## Example

**Example 1**

Input:  matrix = [[1,2,3],
                  [4,5,6],
                  [7,8,9]]

Output: [[7,4,1],
         [8,5,2],
         [9,6,3]]


---

## Approach

1. **Transpose the Matrix:**

   * Swap elements across the main diagonal (`matrix[i][j]` ↔ `matrix[j][i]`).
   * This flips the matrix over its diagonal.

2. **Reverse Each Row:**

   * After transpose, reverse every row.
   * This results in a 90° clockwise rotation.

---

## Complexity Analysis

* **Time Complexity:** O(n²)

  * Each element is visited at most twice (once in transpose, once in reverse).

* **Space Complexity:** O(1)

  * In-place rotation, no extra matrix used.

---

## Key Insight

* **Transpose + Reverse = Rotate 90°**

  * Transpose converts rows to columns.
  * Reversing rows finalizes the clockwise rotation.

---

## Pattern Tags

* Matrix Manipulation
* Simulation
* In-Place Algorithm


