# 13. Roman to Integer

- **Difficulty:** Easy
- **Topics:** Hash Table, String
- **Implementations:** Python, C++, JavaScript, Java

## Approach

Map each Roman symbol to its value. Subtract a symbol when it is smaller than the symbol immediately after it; otherwise add it.

## Complexity

- **Time:** O(n) for a single pass, or O(log n) for binary search, as applicable.
- **Space:** O(1) auxiliary space for these implementations, excluding language/runtime overhead and any returned output.

## Validation

Implementations are written in LeetCode's expected `Solution` interface style. Local and online-judge results must be recorded separately; no Accepted verdict is claimed by this file.
