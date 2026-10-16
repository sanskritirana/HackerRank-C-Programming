/*
Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.

Function Signature

int findSecondLargest(int arr[], int n);
Input Format

The function will receive:
An integer n, the number of elements in the array.
An integer array arr[] of size n, where arr[i] represents the i-th element.
Constraints

1 ≤ n ≤ 10^5
−10^9 ≤ arr[i] ≤ 10^9
The function should run in O(N) time complexity and use O(1) extra space.
Output Format

Return the second largest element in the array.
If there is no valid second largest element, return -1.
Sample Input 0

5  
1 3 4 5 2  
Sample Output 0

4  
Sample Input 1

4  
7 7 7 7  
Sample Output 1

-1
*/

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n)
{
    if (n < 2)
        return -1;

    long long largest = LLONG_MIN;
    long long secondLargest = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == LLONG_MIN)
        return -1;

    return secondLargest;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
