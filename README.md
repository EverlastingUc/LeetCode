# LeetCode — 1,000 Problem Challenge

A structured, multi-language collection of **1,000 unique LeetCode problems**. The goal is to build a dependable algorithm-and-data-structures portfolio with readable explanations, consistent naming, and verified solutions.

> **Scope:** 1,000 unique problems total across the project. A problem may have one or more language implementations; this is not 1,000 problems multiplied by every language.

## Project status

| Metric | Current |
|---|---:|
| Target unique problems | 1,000 |
| Unique problems with implementations | 14 |
| Remaining target | 986 |
| Languages in repository plan | 32 |
| New problem folders added in this batch | 10 |
| New language implementations added | 40 |

The four pre-existing unique solutions are preserved. Ten additional problems now have implementations in Python, C++, JavaScript, and Java. Implementations are not counted as LeetCode Accepted until submitted and judged.

## Languages

C, C++, C#, Java, JavaScript, TypeScript, Python, Rust, Go, Kotlin, Swift, PHP, Ruby, Dart, Scala, Haskell, Elixir, Lua, Perl, Erlang, R, Objective-C, OCaml, F#, Clojure, Julia, Racket, Common Lisp, Nim, Zig, Crystal, and SQL.

This is a broad project language set, not literally every programming language in existence. LeetCode online-judge support varies by language, version, and problem. Local implementations are not automatically LeetCode Accepted.

Some languages may not be available in LeetCode's online judge for every problem. Language folders are for implementations and local learning; judge acceptance is recorded only when actually confirmed on LeetCode.

## Repository structure

```text
.
├── README.md
├── PROGRESS.md
├── ROADMAP.md
├── CONTRIBUTING.md
├── LANGUAGES.md
├── DAILY_LOG.md
├── 0001_two_sum.py              # preserved legacy solutions
├── 0001_two_sum.js
├── 0002_add_two_numbers.py
├── 3312_sorted_gcd_pair_queries.py
├── 3658_gcd_of_odd_and_even_sums.py
└── Problems/
    └── 0001-two-sum/
        ├── README.md
        └── Python/
            └── solution.py
```

New problems use the canonical folder pattern:

```text
Problems/0001-two-sum/
├── README.md
├── Python/solution.py
├── JavaScript/solution.js
└── ...
```

Only create a language implementation when it is genuinely implemented and reviewed. Do not add empty files just to inflate language coverage.

## Problem index

| LeetCode ID | Problem | Difficulty | Topic | Implementations |
|---:|---|---|---|---|
| 1 | Two Sum | Easy | Array, Hash Table | [Python](Problems/0001-two-sum/Python/solution.py), [JavaScript](Problems/0001-two-sum/JavaScript/solution.js) |
| 2 | Add Two Numbers | Medium | Linked List, Math | Python |
| 3312 | Sorted GCD Pair Queries | Hard | Number Theory, Sorting | Python |
| 3658 | GCD of Odd and Even Sums | Easy | Math, Number Theory | Python |
| 9 | Palindrome Number | Easy | Math | Python, C++, JavaScript, Java |
| 13 | Roman to Integer | Easy | Hash Table, String | Python, C++, JavaScript, Java |
| 14 | Longest Common Prefix | Easy | String, Trie | Python, C++, JavaScript, Java |
| 20 | Valid Parentheses | Easy | String, Stack | Python, C++, JavaScript, Java |
| 26 | Remove Duplicates from Sorted Array | Easy | Array, Two Pointers | Python, C++, JavaScript, Java |
| 27 | Remove Element | Easy | Array, Two Pointers | Python, C++, JavaScript, Java |
| 35 | Search Insert Position | Easy | Array, Binary Search | Python, C++, JavaScript, Java |
| 58 | Length of Last Word | Easy | String | Python, C++, JavaScript, Java |
| 66 | Plus One | Easy | Array, Math | Python, C++, JavaScript, Java |
| 121 | Best Time to Buy and Sell Stock | Easy | Array, Dynamic Programming | Python, C++, JavaScript, Java |

See [PROGRESS.md](PROGRESS.md) for counts, [LANGUAGES.md](LANGUAGES.md) for the full language matrix, and [ROADMAP.md](ROADMAP.md) for execution phases.

## Solution quality rules

- Preserve the exact LeetCode problem ID and canonical title.
- Include an explanation, complexity analysis, and edge-case notes in each problem README.
- Use LeetCode-compatible function signatures when the platform provides a class/function template.
- Test representative cases locally; document what was tested.
- Never claim an **Accepted** verdict unless the submission was actually judged Accepted by LeetCode.
- Keep one canonical problem directory even when it has multiple language implementations.

## License

MIT. Individual problem statements and platform names remain the property of their respective owners; this repository contains independently written solution code and explanations.
