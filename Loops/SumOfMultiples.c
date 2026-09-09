/*
Given a positive integer n, find the sum of all integers from 1 to n (inclusive) that are divisible by 3, 5, or 7.

You must print the result, not return it.

Input Format

A single integer input: n

Constraints

1 ≤ 𝑛 ≤ 10^3
Output Format

Print a single integer — the sum of all numbers in the given range divisible by 3, 5, or 7

Sample Input 0

7
Sample Output 0

21
Explanation 0

Numbers in the range [1, 7] that are divisible by 3, 5, or 7 are 3, 5, 6, 7.
The sum of these numbers is 21

Sample Input 1

10
Sample Output 1

40
Explanation 1

Numbers in the range [1, 10] that are divisible by 3, 5, or 7 are 3, 5, 6, 7, 9, 10.
The sum of these numbers is 40.

Sample Input 2

9
Sample Output 2

30
Explanation 2

Numbers in the range [1, 9] that are divisible by 3, 5, or 7 are 3, 5, 6, 7, 9.
The sum of these numbers is 30.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int sum;
    for (int i=0; i<=n; i++){
        if (i%3==0 || i%5==0 || i%7==0){
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}
