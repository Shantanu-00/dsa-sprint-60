
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> bubblesort(vector<int>& nums) {
        int n = nums.size();
        for (int i = n - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {5, 1, 4, 2, 8};

    cout << "Original array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    vector<int> sorted = s.bubblesort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) cout << num << " ";
    cout << endl;

    return 0;
}