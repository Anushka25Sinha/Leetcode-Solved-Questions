class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;

        // Step 1: Replace negative numbers, zeros, and numbers greater than n with 1.
        // This ensures that all numbers in the array are positive and in the range [1, n]
        for (int i = 0; i < n; i++) {
            // If we encounter 1, set flag to true
            if (nums[i] == 1) {
                flag = true;
            }
            // Replace numbers <= 0 or greater than n with 1
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = 1;
            }
        }

        // If the array doesn't contain 1, the smallest missing positive is 1
        if (!flag) return 1;

        // Step 2: Use the array itself as a "hash map" to mark presence of numbers in the range [1, n]
        for (int i = 0; i < n; i++) {
            int value = abs(nums[i]); // Get the absolute value of the current element
            // If value is within the range [1, n], mark the corresponding index negative
            if (value == n) {
                nums[0] = -abs(nums[0]); // Special handling for n, use nums[0] as an indicator
            } else {
                // Mark nums[value - 1] as negative to indicate that value is present
                nums[value] = -abs(nums[value]);
            }
        }

        // Step 3: Find the first index i where nums[i] is positive. That means i + 1 is missing.
        for (int i = 1; i < n; i++) {
            if (nums[i] > 0) return i; // The first positive index i means i + 1 is missing
        }

        // Step 4: Check if nums[0] is positive. If it's positive, it means n is missing.
        if (nums[0] > 0) {
            return n;
        }

        // Step 5: If all numbers from 1 to n are present, the smallest missing positive is n + 1.
        return n + 1;



    
    }
};