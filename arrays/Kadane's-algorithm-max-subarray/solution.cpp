class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max_overall= INT_MIN;
       int sum_till_here=0;
       int n=nums.size();
       for(int i=0;i<n;i++) {
        sum_till_here= sum_till_here+nums[i];
        max_overall= max(sum_till_here,max_overall);
        if (sum_till_here<0){
            sum_till_here=0;
        }
       }
       return max_overall;
    }
};