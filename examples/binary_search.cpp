#include <iostream>
#include <vector>
#include <algorithm>

// Binary Search Implementation
// Time Complexity: O(log n)
// Space Complexity: O(1)
// This example demonstrates various binary search techniques

// Classic binary search - finds any occurrence of target
// Returns index if found, -1 otherwise
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoid overflow
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;  // Not found
}

// Find leftmost (first) occurrence of target
// Returns index if found, -1 otherwise
int findLeftmost(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;  // Continue searching in left half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

// Find rightmost (last) occurrence of target
// Returns index if found, -1 otherwise
int findRightmost(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;  // Continue searching in right half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

// Find the first element >= target
// Useful for range queries
int lowerBound(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left;  // Returns arr.size() if all elements < target
}

// Find the first element > target
int upperBound(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left;  // Returns arr.size() if all elements <= target
}

// Test function to demonstrate all binary search variants
void runTests() {
    std::vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 5, 5, 6, 7};
    int target = 5;
    
    std::cout << "Test Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    std::cout << "Searching for target: " << target << "\n";
    std::cout << "================================================\n\n";
    
    // Test classic binary search
    int pos = binarySearch(arr, target);
    std::cout << "Classic Binary Search: ";
    if (pos != -1) {
        std::cout << "Found at index " << pos << " (value: " << arr[pos] << ")\n";
    } else {
        std::cout << "Not found\n";
    }
    
    // Test leftmost
    int leftPos = findLeftmost(arr, target);
    std::cout << "Leftmost Position: ";
    if (leftPos != -1) {
        std::cout << "Found at index " << leftPos << " (value: " << arr[leftPos] << ")\n";
    } else {
        std::cout << "Not found\n";
    }
    
    // Test rightmost
    int rightPos = findRightmost(arr, target);
    std::cout << "Rightmost Position: ";
    if (rightPos != -1) {
        std::cout << "Found at index " << rightPos << " (value: " << arr[rightPos] << ")\n";
    } else {
        std::cout << "Not found\n";
    }
    
    std::cout << "\n";
    std::cout << "Range queries for target value " << target << ":\n";
    std::cout << "================================================\n\n";
    
    // Test lower and upper bound
    int lower = lowerBound(arr, target);
    int upper = upperBound(arr, target);
    
    std::cout << "Lower Bound (first element >= " << target << "): index " << lower;
    if (lower < arr.size()) {
        std::cout << " (value: " << arr[lower] << ")";
    }
    std::cout << "\n";
    
    std::cout << "Upper Bound (first element > " << target << "): index " << upper;
    if (upper < arr.size()) {
        std::cout << " (value: " << arr[upper] << ")";
    }
    std::cout << "\n";
    
    if (lower < arr.size() && upper <= arr.size()) {
        std::cout << "\nElements equal to " << target << ": ";
        for (int i = lower; i < upper; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";
    std::cout << "================================================\n";
    std::cout << "Algorithm Complexity Analysis:\n";
    std::cout << "Time Complexity:  O(log n)\n";
    std::cout << "Space Complexity: O(1)\n";
    std::cout << "\nNote: All these variants assume a sorted input array!\n";
}

int main() {
    std::cout << "Binary Search Algorithm Demonstration\n";
    std::cout << "=====================================\n\n";
    
    runTests();
    
    return 0;
}
