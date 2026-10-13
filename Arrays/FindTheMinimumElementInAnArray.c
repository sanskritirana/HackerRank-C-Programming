/*
Given an array of integers, determine the minimum element present in the array.

Input Format

First line: Integer N
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the minimum element of the array.

Sample Input 0

5
1 3 5 7 9
Sample Output 0

1
Sample Input 1

4
-5 -2 -9 -1
Sample Output 1

-9
Sample Input 2

1
50
Sample Output 2

50
Sample Input 3

6
5 5 5 5 5 5
Sample Output 3

5
Sample Input 4

4
1000000000 -1000000000 0 50
Sample Output 4

-1000000000
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int x;
    scanf("%d", &x);          
    long long min = x;  

    for (int i = 1; i < N; i++) {
        scanf("%d", &x);
        if (x < min)
            min = x;
    }

    printf("%lld", min);
    return 0;
}

