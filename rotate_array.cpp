class Solution {
public:
    // void reverse(vector<int>&nums, int l, int h){
    //     // l-> h reverse using swap.
    // }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; //

        // 1 2 3 4 5 6 7 -

        // 1. reverse all
        reverse(nums.begin(), nums.end()); // [start_add, end_add+1)

        // 2. reverse first k
        reverse(nums.begin(), nums.begin() + k);

        // 3. reverse first n-k
        reverse(nums.begin() + k, nums.end());
    }
};
