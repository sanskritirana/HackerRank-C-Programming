/*
Given an array of integers and a value K, count how many elements in the array are strictly greater than K.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Third line: An integer K
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i], K ≤ 10⁹
Output Format

Print a single integer representing the count of elements strictly greater than K.
Sample Input 0

5
1 3 5 7 9
4
Sample Output 0

3
Sample Input 1

4
-5 -2 -9 -1
-3
Sample Output 1

2
Sample Input 2

4
10 20 30 40
5
Sample Output 2

4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    int count=0;

    for (int i=0; i<n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
