class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // OPTIMAL SOLUTION --> 2 POINTER APPROACH
        int n = nums.size();
        int j = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        if (j != -1) {
            for (int i = j + 1; i < n; i++) {
                if (nums[i] != 0) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    j++;
                }
            }
        }

        // BRUTE FORCE SOLUTION
        // int n = nums.size();
        // vector<int> temp(n);
        // int j = 0;
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] != 0) {
        //         temp[j] = nums[i];
        //         j++;
        //     }
        // }
        // while (j < n) {
        //     temp[j] = 0;
        //     j++;
        // }

        // for (int i = 0; i < n; i++) {
        //     nums[i] = temp[i];
        // }
    }
};