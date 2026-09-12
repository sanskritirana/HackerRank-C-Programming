/*
Write a program to print an arrowhead pattern based on an integer input n. The pattern should consist of asterisks (*) in the shape of an arrowhead which narrows back to a single asterisk symmetrically after reaching the widest row.

The pattern should be formed based on the number of rows n entered by the user.

Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the arrowhead cannot be drawn by the given input value.

Input Format

A single integer n.
Constraints

-50 <= n <= 50
Output Format

A symmetric arrowhead pattern, for n=5, as described below:
*
**
* *
*  *
*   *
*  *
* *
**
*
Print "Shape Not Possible" if the arrowhead cannot be drawn.
Sample Input 0

5
Sample Output 0

*
**
* *
*  *
*   *
*  *
* *
**
*
Sample Input 1

3
Sample Output 1

*
**
* *
**
*
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("Shape Not Possible");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
