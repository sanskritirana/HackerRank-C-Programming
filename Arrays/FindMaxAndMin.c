/*
Given an array of N integers, your task is to determine the maximum and minimum values in the array.

Input Format

The first line contains an integer N, the number of elements in the array.
The second line contains N space-separated integers A[i], representing the elements of the array.
Constraints

1 ≤ N ≤ 10^5
−10^9 ≤ A[i] ≤ 10^9
Output Format

Print two space-separated integers: the maximum and minimum values in the array.
Sample Input 0

5  
1 3 5 7 9
Sample Output 0

9 1
Sample Input 1

4  
-5 -2 -9 -1
Sample Output 1

-1 -9
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    scanf("%d", &x);          
    long long min = x;  
    long long max = x;  

    for (int i = 0; i < n-1; i++) {
        scanf("%d", &x);
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    printf("%lld %lld", max, min);
    return 0;
}

