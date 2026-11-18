# 0001 — Two Sum

- **LeetCode:** https://leetcode.com/problems/two-sum/
- **Difficulty:** Easy
- **Topics:** Array, Hash Table
- **Status:** Existing implementations preserved; canonical directory added.

## Approach: one-pass hash map

Scan the array from left to right. For each value, compute its complement relative to the target. If the complement has already been seen, return its stored index and the current index. Otherwise, store the current value and index.

## Complexity

- **Time:** O(n) expected, with hash-map operations.
- **Space:** O(n) in the worst case.

## Edge cases

- The matching pair may appear at the final element.
- Negative values and duplicate values are valid.
- The same array element must not be used twice.

## Implementations

- [Python](../../0001_two_sum.py)
- [JavaScript](../../0001_two_sum.js)

These links point to the preserved original files. Move or duplicate implementations into language subfolders only after validating the canonical versions.
