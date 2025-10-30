class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = *max_element(nums.begin(), nums.end());
        int result = right;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int sum = 0;
            for (int num : nums) {
                sum += (num + mid - 1) / mid; 
            }
            if (sum <= threshold) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return result;
    }
};