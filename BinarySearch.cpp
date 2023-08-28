#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid; // Found the target, return its index
            } else if (nums[mid] < target) {
                left = mid + 1; // Target is in the right half
            } else {
                right = mid - 1; // Target is in the left half
            }
        }

        return -1; // Target not found
    }
    
int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;
    int index = sol.search(nums, target);
    if (index != -1) {
        cout << "Target found at index " << index << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}

};
