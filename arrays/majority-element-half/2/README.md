
# Majority Element n/2

## Problem Statement
Given an array `nums` of size `n`, return the **majority element**.  

The **majority element** is the element that appears **more than ⌊n / 2⌋ times**.  
You may assume that the majority element always exists in the array.

---

## Examples

**Example 1**
```text
Input: nums = [3,2,3]
Output: 3
````

**Example 2**

```text
Input: nums = [2,2,1,1,1,2,2]
Output: 2
```

---

## Approach – Boyer-Moore Voting Algorithm

1. Initialize two variables:

   * `count = 0`
   * `element` to hold the current candidate for majority element.

2. Iterate through the array:

   * If `count == 0`, set `element = nums[i]` and reset `count = 1`.
   * If the current number equals `element`, increment `count`.
   * Otherwise, decrement `count`.

3. After one pass, `element` will be the majority element (guaranteed by problem statement).


---

## Complexity Analysis

* **Time Complexity:** O(n)

  * Single pass through the array.
* **Space Complexity:** O(1)

  * Only a few variables are used regardless of input size.

---

## Key Insight

* The Boyer-Moore Voting Algorithm works because the majority element is guaranteed to exist.
* Any non-majority elements will be canceled out by the majority element during the counting process.

---

## Pattern Tags

* Array
* Hashing
* Greedy
* Boyer-Moore Voting Algorithm


