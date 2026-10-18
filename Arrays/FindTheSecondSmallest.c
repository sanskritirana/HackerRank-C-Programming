/*
Given an array of integers, determine the second smallest distinct element in the array.

The second smallest element is defined as the element that is strictly greater than the smallest element and smaller than all other remaining elements.
If the array does not contain at least two distinct elements, print -1.
Note: Adjacent elements may be the same.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the second smallest distinct element in the array.
If no such element exists, print -1.
Sample Input 0

3
5 5 4
Sample Output 0

5
Sample Input 1

3
5 5 5
Sample Output 1

-1
Sample Input 2

7
5 3 8 6 2 9 1
Sample Output 2

2
Sample Input 3

6
1 1 2 2 3 3
Sample Output 3

2
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int smallest = arr[0];
    int secondSmallest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > smallest) {
            secondSmallest = arr[i];
            break;
        }
    }

    printf("%d", secondSmallest);
    return 0;
}
