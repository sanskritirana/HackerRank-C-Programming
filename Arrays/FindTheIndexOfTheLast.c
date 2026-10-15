/*
Given an array of integers and a target value K, determine the index of the last occurrence of K in the array.

Indexing is 0-based
If the element does not exist in the array, print -1
Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Third line: An integer K, the element to search for
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i], K ≤ 10⁹
Output Format

Print a single integer — the 0-based index of the last occurrence of K.
If K is not present, print -1.
Sample Input 0

6
1 2 3 2 4 2
2
Sample Output 0

5
Sample Input 1

5
1 3 5 7 9
4
Sample Output 1

-1
Sample Input 2

1
5
5
Sample Output 2

0
Sample Input 3

5
4 4 4 4 4
4
Sample Output 3

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
    
    int target;
    scanf("%d", &target);
    
    int index = -1;

    for (int i=0; i<n; i++) {
        if (arr[i] == target) {
            index = i;
        }
    }

    printf("%d", index);
    return 0;
}
