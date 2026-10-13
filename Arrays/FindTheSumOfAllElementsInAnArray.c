/*
Given an array of integers, compute the sum of all elements present in the array.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the sum of all elements in the array.

Sample Input 0

5
1 2 3 4 5
Sample Output 0

15
Sample Input 1

4
-5 -10 -15 -20
Sample Output 1

-50
Sample Input 2

1
10
Sample Output 2

10
Sample Input 3

4
10 -10 20 -20
Sample Output 3

0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    long long sum = 0;
    int x;

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("%lld", sum);
    return 0;
}

