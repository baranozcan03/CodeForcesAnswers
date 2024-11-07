#include <iostream>
#include <vector>

//returns the index of h if it exists in the sorted vector v. 
//If h does not exist, it returns the index of the largest element smaller than h.
//if nothing smaller eturns -1
//if multiple h exitsts returns the last occurence.
template <typename T>
int findLargestIndexOrPredecessorIndex(const std::vector<T>& v, T h) {
    int left = 0, right = v.size() - 1;
    int predecessorIndex = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;    
        if (v[mid] == h) {
            predecessorIndex = mid;
            left = mid + 1;
        } else if (v[mid] < h) {
            predecessorIndex = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return predecessorIndex;  
}