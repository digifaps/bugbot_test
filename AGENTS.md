# Agent Rules

## Permissions & Access

- **Do not work around permission problems.** If you encounter permission errors (file access, git operations, API calls), stop and ask the user. Never use `sudo`, bypass checks, or attempt alternative methods without explicit user approval.

## Git & Branching

- **Never push directly to `main` or `master`.** Always create a feature branch, push to that branch, and use pull requests. Ask the user before pushing if you're unsure.

## Code Quality

- **Keep code minimal.** Write only what's necessary. Avoid over-engineering, unnecessary abstractions, or speculative features. Prefer simple solutions over clever ones.
- Remove dead code, unused imports, and commented-out code before committing.

## Documentation

- **Minimal but complete documentation.** Write just enough to explain:
  - What a function/module does (one line)
  - Why non-obvious decisions were made (brief rationale)
  - How to use public APIs (concise example if needed)
- Avoid verbose explanations of obvious code. No JSDoc for trivial getters/setters.
