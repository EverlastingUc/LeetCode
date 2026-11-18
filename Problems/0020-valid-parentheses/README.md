# 20. Valid Parentheses

- **Difficulty:** Easy
- **Topics:** String, Stack
- **Implementations:** Python, C++, JavaScript, Java

## Approach

Use a stack for opening brackets. Each closing bracket must match and remove the most recent unmatched opener.

## Complexity

- **Time:** O(n) for a single pass, or O(log n) for binary search, as applicable.
- **Space:** O(1) auxiliary space for these implementations, excluding language/runtime overhead and any returned output.

## Validation

Implementations are written in LeetCode's expected `Solution` interface style. Local and online-judge results must be recorded separately; no Accepted verdict is claimed by this file.
