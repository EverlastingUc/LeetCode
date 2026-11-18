# 14. Longest Common Prefix

- **Difficulty:** Easy
- **Topics:** String, Trie
- **Implementations:** Python, C++, JavaScript, Java

## Approach

Start with the first string as the candidate prefix. Shorten it until every subsequent string starts with it.

## Complexity

- **Time:** O(n) for a single pass, or O(log n) for binary search, as applicable.
- **Space:** O(1) auxiliary space for these implementations, excluding language/runtime overhead and any returned output.

## Validation

Implementations are written in LeetCode's expected `Solution` interface style. Local and online-judge results must be recorded separately; no Accepted verdict is claimed by this file.
