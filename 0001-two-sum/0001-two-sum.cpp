class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); ++i) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0, right = arr.size() - 1;
        while (left < right) {
            int current_sum = arr[left].first + arr[right].first;
            if (current_sum == target) {
                return {arr[left].second, arr[right].second};
            } else if (current_sum < target) {
                ++left;
            } else {
                --right;
            }
        }
        return {};
    }
};
