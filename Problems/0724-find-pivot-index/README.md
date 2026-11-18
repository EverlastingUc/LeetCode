# 724. Find Pivot Index

- **Difficulty:** Easy
- **Topics:** Array, Prefix Sum
- **Implementations:** Python, C++, JavaScript, Java

## Approach

Compute the total sum once. While scanning, compare the left sum with total minus left sum and current value.

## Complexity

- **Time:** O(n) for array scans; O(rows × columns) for matrix aggregation.
- **Space:** O(n) for returned output; O(1) auxiliary where computed in place or as a running scan.

## Judge status

Not submitted in this batch; no Accepted verdict is claimed.
