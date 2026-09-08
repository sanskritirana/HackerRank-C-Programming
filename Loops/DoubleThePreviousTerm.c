/*
Write a program to generate a sequence of n terms where each term is double the previous one, starting from 1.

Input Format

A single integer n.
Constraints

0 ≤ n ≤ 35
Output Format

A single line containing the first n terms of the sequence, separated by spaces, starting with '<' and ending with '>'.
If series doesn't exist, do not print anything.
Sample Input 0

5
Sample Output 0

<1 2 4 8 16>
Sample Input 1

3
Sample Output 1

<1 2 4>
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        return 0; 
    }

    int term = 1;

    printf("<");
    for (int i = 1; i <= n; i++) {
        printf("%d", term);
        term *= 2;

        if (i < n)
            printf(" ");
    }
    printf(">");

    return 0;
}
