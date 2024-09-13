/* Algorithm:
  1. Initialize the first element of the array as the maximum (max).
  2. Iterate through the rest of the array:
   - If an element is greater than the current max, update max to this element.
  3. After the loop ends, max contains the maximum value.*/


 #include<stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];  // Initialize max as the first element

    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if the current element is greater
        }
    }

    return max;  // Return the maximum element
}

int main() {
    int arr[] = {2, 8, 3, 9, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, size);

    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}

