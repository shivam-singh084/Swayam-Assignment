class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto it : mp){
            if(mp[it.first] > nums.size()/2){
                return it.first;
            }
        }
        return {};
    }
};