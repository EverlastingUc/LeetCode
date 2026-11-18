# LeetCode — 1,000 Problem Challenge

A structured, multi-language collection of **1,000 unique LeetCode problems**. The goal is to build a dependable algorithm-and-data-structures portfolio with readable explanations, consistent naming, and verified solutions.

> **Scope:** 1,000 unique problems total across the project. A problem may have one or more language implementations; this is not 1,000 problems multiplied by every language.

## Project status

| Metric | Current |
|---|---:|
| Target unique problems | 1,000 |
| Existing unique solutions recorded | 4 |
| Remaining target | 996 |
| Languages planned | 19 |
| Verified new solutions in this setup commit | 0 |

The four pre-existing root-level solutions are preserved. Counts will only increase when a problem has a real solution file; planned slots and placeholders do not count as solved.

## Languages

C, C++, C#, Java, JavaScript, TypeScript, Python, Rust, Go, Kotlin, Swift, PHP, Ruby, Dart, Scala, Haskell, Elixir, Lua, and Perl.

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

See [PROGRESS.md](PROGRESS.md) for counts and [ROADMAP.md](ROADMAP.md) for the 1,000-problem execution plan.

## Solution quality rules

- Preserve the exact LeetCode problem ID and canonical title.
- Include an explanation, complexity analysis, and edge-case notes in each problem README.
- Use LeetCode-compatible function signatures when the platform provides a class/function template.
- Test representative cases locally; document what was tested.
- Never claim an **Accepted** verdict unless the submission was actually judged Accepted by LeetCode.
- Keep one canonical problem directory even when it has multiple language implementations.

## License

MIT. Individual problem statements and platform names remain the property of their respective owners; this repository contains independently written solution code and explanations.
