#include <iostream>
#include <vector>

// Binary search function
int binarySearch(const std::vector<int> &arr, int target) {
    int left = 0; // Left pointer
    int right = arr.size() - 1; // Right pointer

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == target) {
            return mid; // Return the index if target is found
        } else if (arr[mid] < target) {
            left = mid + 1; // Adjust the left pointer for the right subarray
        } else {
            right = mid - 1; // Adjust the right pointer for the left subarray
        }
    }

    return -1; // Return -1 if target is not found
}

int main() {
    const std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Example sorted array
    int target = 11; // Example target value

    int result = binarySearch(arr, target); // Perform binary search

    // Print the result based on whether the target value is found or not
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
