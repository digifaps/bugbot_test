# bugbot_test

Test repository for automated C memory-safety review (Bugbot). The code is intentionally unsafe so review tools can detect real issues.

## Prerequisites

- A C compiler (e.g. `gcc`)

## Build & run

```bash
gcc -Wall -Wextra -o process_input main.c
./process_input "hello"
```

Without an argument, the program prints usage and exits with code 1:

```bash
./process_input
# Usage: ./process_input <input>
```

## Project layout

| File | Description |
|------|-------------|
| `main.c` | CLI that processes a command-line string |
| `BUGBOT.md` | Memory-safety focus areas for automated review |
| `AGENTS.md` | Contributor and agent rules (git workflow, code quality) |

## Workflow

- Work on feature branches; open pull requests to merge changes.
- Do not push directly to `main` or `master`.
- See [AGENTS.md](AGENTS.md) for full guidelines.
