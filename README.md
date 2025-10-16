[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/DH0gVDZ4)
# Project 4 — Remove All Even Numbers from a Singly Linked List (C++)

## Overview
Implement `LinkedList::remove_evens()` to delete all nodes with even values. Handle head deletions and consecutive evens correctly.

**Learning goals**
- Safe deletion patterns in singly linked lists
- Head updates & next-pointer maintenance
- Edge cases (all evens, alternating evens/odds)

## Files
```
include/LinkedList.hpp   # interface
src/LinkedList.cpp       # your changes here (remove_evens)
tests/tests.cpp          # unit tests
Makefile
```

## Your task
1. Remove even-valued nodes at the head:
2. Sweep the remainder with a trailing pointer:


Expected after removal on the seeded list: `[1, 3, 5, 7]`.

## Build, Test, and Submit

### 1) Build & test locally
```bash
make
make test
```

### 2) Submit:
- Commit & push to trigger autograding (Actions tab shows logs).
```bash
make submit
```

### 3) Submit to GitHub Classroom
```bash
git add -A
git commit -m "submit"
git push
```

## What we test
- Correct removal across head/middle/tail
- No leaks (deleted nodes are freed)
- Stable order of remaining odds
