# Contribution and Solution Standards

## Folder naming

Use a zero-padded four-digit problem ID and a lowercase kebab-case slug:

`Problems/0001-two-sum/`

## Required problem README

Each problem directory must contain a README with:

- LeetCode link, ID, title, difficulty, and topic tags
- concise restatement of the task (do not reproduce the full copyrighted prompt)
- approach and correctness intuition
- time and space complexity
- edge cases
- implementation list and test notes
- judge status, only when known

## Implementations

Place source files in language-named directories using the conventions in [LANGUAGES.md](LANGUAGES.md). Match the required LeetCode signature. Prefer clear, idiomatic solutions over clever but opaque code.

## Verification

Before marking a solution complete:

1. Check syntax with the relevant compiler/interpreter.
2. Run example cases and additional edge cases.
3. Check constraints for overflow, recursion depth, and complexity.
4. Record test evidence and the exact judge result if submitted.

Never invent runtime, memory, percentile, or Accepted metrics.

## Progress updates

Update [PROGRESS.md](PROGRESS.md) when a problem is genuinely implemented and reviewed. The unique-problem count must not increase when adding another language implementation for an existing problem.
