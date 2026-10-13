/*
Given an array of integers, calculate the average of all elements in the array.

The average must be computed as the sum of all elements divided by N and printed as a floating-point value.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the average of the array elements as a floating-point value.

Sample Input 0

5
1 2 3 4 5
Sample Output 0

3.000000
Sample Input 1

1
7
Sample Output 1

7.000000
Sample Input 2

4
-5 0 5 6
Sample Output 2

1.500000
Sample Input 3

3
1 2 4
Sample Output 3

2.333333
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    double sum = 0;
    int x;

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("%f", sum/N);
    return 0;
}

