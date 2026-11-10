ASSIGNMENT 3 — C PROGRAMS

Files:
1. Q1_maximum_of_three.c
2. Q2_count_multiples.c
3. Q3_rectangle_area.c
4. Q4_perfect_square.c
5. Q5_gcd_euclid.c
6. Q6_convert_seconds.c
7. Q7_piecewise_function.c

Compile an individual program in VS Code's terminal with:
    gcc Q1_maximum_of_three.c -o Q1
Run it with:
    .\Q1.exe

Replace the filename and output name for the other questions.

Notes:
- Each file is a complete, standalone C program with its own main().
- Q3 assumes non-negative dimensions whose product fits in long long.
- Q6 accepts a non-negative total number of seconds.
- Q7 uses long long arithmetic; keep x within a range where the
  selected expression fits in long long (for example, -1000000000
  through 1000000000).
- Q2 returns 0 for non-positive n or k.
- Q4 returns 0 for negative input.
- Q5 follows the stated condition that both inputs are not zero.
