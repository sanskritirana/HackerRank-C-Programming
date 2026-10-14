/*
You are given an array of N integers. Compute the difference between the sum of elements stored at even indices and the sum of elements stored at odd indices.

Use 0-based indexing
Difference = (sum of even-index elements) − (sum of odd-index elements)
Input Format

First line: Integer N
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print a single integer representing the required difference.
Sample Input 0

5
1 2 3 4 5
Sample Output 0

3
Sample Input 1

4
10 10 10 10
Sample Output 1

0
Sample Input 2

1
0
Sample Output 2

0
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long even = 0, odd = 0;  

    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        if (i % 2 == 0)
            even += x;
        else
            odd += x;
    }

    long long diff = even - odd;  
    printf("%lld", diff);

    return 0;
}
