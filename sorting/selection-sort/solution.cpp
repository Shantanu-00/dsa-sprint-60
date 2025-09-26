#include<vector>
#include<iostream>
using namespace std;
class solution
{
   
public:
    vector<int> selectionSort(vector<int>& nums){
        int n = nums.size();
        
        for(int i = 0; i<n-1;i++){
            int mini = i;
            for(int j = i+1;j<n;j++){
                if (nums[j]<nums[mini]){
                    mini = j;
                }
            }
            swap(nums[mini],nums[i]);
        }
        return nums;
    }
    
};

int main(){
    solution s;
    vector<int> nums = {64, 25, 12, 22, 11};
    
    cout << "Original array: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    vector<int> sorted = s.selectionSort(nums);

    cout << "Sorted array: ";
    for(int num : sorted) cout << num << " ";
    cout << endl;

    return 0;
}

