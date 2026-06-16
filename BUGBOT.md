# Bugbot Review Guidance

This repository contains C code. Review changes with a strong focus on memory
safety and undefined behavior. Treat the following as high-severity issues and
always report them, even in small or example programs:

- Buffer overflows and out-of-bounds writes/reads.
- Unbounded copies into fixed-size buffers (`strcpy`, `strcat`, `sprintf`,
  `gets`). Prefer bounded variants (`strncpy`, `snprintf`) with explicit length
  checks.
- Use of untrusted input (e.g. `argv`, stdin, network/file data) without length
  validation before copying into stack or heap buffers.
- Integer overflow in size/length calculations.
- Use-after-free, double-free, and uninitialized memory reads.

Assume all external input is attacker-controlled. Flag any code path where the
size of incoming data is not checked against the destination capacity.
