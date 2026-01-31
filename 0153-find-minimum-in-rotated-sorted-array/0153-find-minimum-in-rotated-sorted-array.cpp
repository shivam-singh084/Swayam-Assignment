class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0; 
        int min = INT_MAX;
        int end = nums.size()-1;
        int mid = st + (end-st)/2;
        while(st < end){
            mid = st + (end-st)/2;

            if(nums[mid] > nums[end]){
                st = mid + 1;
            }
            else{
                end = mid;
            }
        }
        return nums[st];
    }
};