#include <vector>
#include <array>

int binarySearch(const std::vector<int>& vec, int target) {
  int left = 0;
  int right = vec.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (vec[mid] == target) {
      return mid;
    } else if (vec[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int binarySearchFirst(const std::vector<int>& vec, int target) {
  int left = 0;
  int right = vec.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (vec[mid] == target) {
      // If this is the first occurrence, return it
      if (mid == 0 || vec[mid - 1] != target) {
        return mid;
      } else {
        // Continue searching to the left
        right = mid - 1;
      }
    } else if (vec[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int binarySearch(const std::array<int, 10>& arr, int target) {
  int left = 0;
  int right = arr.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int binarySearchFirst(const std::array<int, 10>& arr, int target) {
  int left =
