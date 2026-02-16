#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0;              // First index of array
    int right = size - 1;      // Last index of array

    while (left <= right) {
        int mid = (left + right) / 2;   // Find the middle index

        if (arr[mid] == target) {
            return mid;  // Target found, return its index
        }
        else if (arr[mid] < target) {
            left = mid + 1;   // If target is greater, search right half
        }
        else {
            right = mid - 1;  // If target is smaller, search left half
        }
    }

    return -1;  // Target not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}