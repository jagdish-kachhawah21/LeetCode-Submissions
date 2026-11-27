class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int arraySize = nums.size();
        k = k % arraySize;
        vector<int> temp(k);

        for (int i = 0; i < k; i++) {
            temp[i] = nums[arraySize - k + i];
        }

        for (int i = arraySize - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }

        // ====================
        // int j = 0;
        // for (int i = arraySize - 1; i >= arraySize - k; i--) {
        //     temp[k - j - 1] = nums[i];
        //     j++;
        // }
        // int l = 1;
        // for (int a = arraySize - k - 1; a >= 0; a--) {
        //     nums[arraySize - l] = nums[a];
        //     l++;
        // }
    }
};