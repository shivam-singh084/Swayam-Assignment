class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        int i = 0;
        int longest = 1;

        for(int j = 0; j < n; j++){
            while ((long long)nums[j] > (long long)k * nums[i]) {
                i++;
            }
            longest = max(longest, j-i+1);
        }
        return n - longest;
    }
};