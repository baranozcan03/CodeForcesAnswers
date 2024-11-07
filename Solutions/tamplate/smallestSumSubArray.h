#include <iostream>
#include <vector>
#include <algorithm>  // for std::min

// Function to find the smallest sum contiguous subarray
//return both the sum and the starting index of that sum.
template <typename T>
std::pair<T,T> smallestSumSubarr(const std::vector<T>& arr, int k) {
    if (arr.size() < k) {
        throw std::invalid_argument("Array size must be at least k.");
    }
    T window_sum = 0;
    for (int i = 0; i < k; ++i) {
        window_sum += arr[i];
    }
    T min_sum = window_sum;
    T min_index = 0;

    for (int i = k; i < arr.size(); ++i) {
        window_sum += arr[i] - arr[i - k];
        min_sum = std::min(min_sum, window_sum);
        if(window_sum == min_sum){ min_index=i-k+1;}
    }
    return {min_sum,min_index};
}