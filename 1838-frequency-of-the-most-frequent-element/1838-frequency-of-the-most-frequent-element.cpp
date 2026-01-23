class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        long long sum = 0;
        int ans = 1;

        for (int j = 0; j < n; j++) {
            sum += nums[j];

            while ((long long)nums[j] * (j - i + 1) - sum > k) {
                sum -= nums[i];
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;

    }
};
