/*
You are given an array of integers. Your task is to find the first repeating element in the array. An element is considered "repeating" if it occurs more than once. If multiple elements repeat, the answer is the one whose first occurrence appears earliest in the array. If no element repeats, print "No Repeating Element".

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers.
Constraints

1 ≤ n ≤ 10⁶
-10⁶ ≤ arr[i] ≤ 10⁶
Output Format

Print the first repeating element.
If there is no repeating element, print "No Repeating Element".
Sample Input 0

7
10 5 3 4 3 5 6
Sample Output 0

5
Explanation 0

5 appears twice and its first appearance is at index 1 which is less than 3 whose first the occurring index is 2.

Sample Input 1

5
1 2 3 4 5
Sample Output 1

No Repeating Element
*/

#include <stdio.h>

#define MAX 2000001

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstIndex[MAX];
    for (int i = 0; i < MAX; i++) {
        firstIndex[i] = -1;
    }

    int minIndex = n;   
    int result = 0;
    int found = 0;

    for (int i = 0; i < n; i++) {
        int shifted = arr[i] + 1000000; 

        if (firstIndex[shifted] == -1) {
            firstIndex[shifted] = i;  
        } 
        else {
            if (firstIndex[shifted] < minIndex) {
                minIndex = firstIndex[shifted];
                result = arr[i];
                found = 1;
            }
        }
    }

    if (found)
        printf("%d", result);
    else
        printf("No Repeating Element");

    return 0;
}
