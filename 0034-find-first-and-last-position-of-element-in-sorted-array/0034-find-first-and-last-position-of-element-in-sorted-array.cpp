class Solution {
public:
    int lowerBound(vector<int>& nums, int n, int target){
        int s = 0;
        int e = n-1;
        int ans = n;
        

        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] >= target){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }

    int upperBound(vector<int>& nums, int n, int target){
        int s = 0;
        int e = n-1;
        int ans = n;

        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] > target){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, n, target);
        int ub = upperBound(nums, n, target);

        if(lb == ub){
            return {-1,-1};
        }
        else{
            return {lb,ub-1};
        }
    }
};