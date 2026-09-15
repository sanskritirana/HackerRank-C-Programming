/*
You are given an integer N. Your task is to find the nearest prime number to N.

If N itself is prime, return N.
If there are two prime numbers at the same minimum distance from N, return the smaller one.
Input Format

A single integer N
Constraints

1 ≤ N ≤ 10^6
Output Format

Print the nearest prime number to N.
Sample Input 0

13
Sample Output 0

13
Sample Input 1

8
Sample Output 1

7
*/

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    if (isPrime(N)) {
        printf("%d", N);
        return 0;
    }

    int dist = 1;
    while (1) {
        int lower = N - dist;
        int upper = N + dist;

        int lowerPrime = (lower >= 2 && isPrime(lower));
        int upperPrime = isPrime(upper);

        if (lowerPrime && upperPrime) {
            printf("%d", lower);   
            return 0;
        }
        if (lowerPrime) {
            printf("%d", lower);
            return 0;
        }
        if (upperPrime) {
            printf("%d", upper);
            return 0;
        }

        dist++;
    }

    return 0;
}
