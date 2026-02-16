

#include <stdio.h>   // Standard input-output library

int main() {
    int arr[100];        // Array declaration (maximum 100 elements)
    int n, i, key;       // n = number of elements, i = loop variable, key = value to search
    int found = 0;       // Flag variable (0 = not found, 1 = found)

    // Taking the number of elements from the user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements as input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // Store each element into the array
    }

    // Taking the value to search
    printf("Enter the value to search: ");
    scanf("%d", &key);

    // Linear Search Algorithm starts here
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {     // Check if current element matches the key
            found = 1;          // Set found flag to 1
            printf("Element found at position %d\n", i + 1);
            break;              // Stop the loop once found
        }
    }

    // If element is not found
    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;   // Program ends successfully
}