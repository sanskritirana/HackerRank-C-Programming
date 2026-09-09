/*
On a number line starting from 1, two points begin moving forward.

The first point jumps forward by A units at a time.
The second point jumps forward by B units at a time.
Both points can only land on numbers that are multiples of their jump length.

The mathematician observing the number line wants to know:

At what smallest positive number will both points land together for the first time?
Task:

Given two natural numbers A and B, determine the smallest positive integer that is a multiple of both numbers.

Input Format

A single line containing two space-separated natural numbers A and B.

Constraints

1 ≤ A, B ≤ 10^9

Output Format

Print a single integer — the first common landing point of both sequences i.e. LCM.

Sample Input 0

4 6
Sample Output 0

12
Sample Input 1

5 10
Sample Output 1

10
Sample Input 2

7 9
Sample Output 2

63
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("0");
        return 0;
    }

    int max = (a > b) ? a : b;

    for (int lcm = max; ; lcm++) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("%d", lcm);
            break;
        }
    }

    return 0;
}


