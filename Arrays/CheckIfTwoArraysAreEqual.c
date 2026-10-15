/*
You are given two arrays of integers, which may or may not have the same length.
Determine whether the two arrays are equal.

Two arrays are considered equal if and only if:

They have the same length
They contain the same elements
Elements are in the same order
If any of the above conditions fails, the arrays are not equal.

Input Format

First line: Integer N, size of the first array
Second line: N space-separated integers (first array)
Third line: Integer M, size of the second array
Fourth line: M space-separated integers (second array)
Constraints

1 ≤ N, M ≤ 10⁵
−10⁹ ≤ A[i], B[i] ≤ 10⁹
Output Format

Print: - Equal — if the two arrays are equal - Not Equal — otherwise

Sample Input 0

3
1 2 3
3
1 2 3
Sample Output 0

Equal
Sample Input 1

3
1 2 3
3
3 2 1
Sample Output 1

Not Equal
Sample Input 2

3
1 2 3
4
1 2 3 4
Sample Output 2

Not Equal
*/

#include <stdio.h>

int main() {
    int n1;
    scanf("%d", &n1);

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    scanf("%d", &n2);

    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    if (n1 != n2) {
        printf("Not Equal");
        return 0;
    }

    for (int i = 0; i < n1; i++) {
        if (arr1[i] != arr2[i]) {
            printf("Not Equal");
            return 0;
        }
    }

    printf("Equal");
    return 0;
}
