class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

    for (int i = 0; i < nums.size(); ) {
        int correct = nums[i] - 1;
        if (nums[i] != nums[correct]) {
            swap(nums[i], nums[correct]);

        } 
        else {
            i++;
            
        }
    }
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != i+1){
            ans.push_back(i+1);
        }
    }
    return ans;
}
};