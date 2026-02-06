class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>mp1(256, -1);
        vector<int>mp2(256, -1);

        int n = s.length();
        for(int i = 0; i < n; i++){
            if(mp1[s[i]] != mp2[t[i]]){
                return false;
            }
            
            mp1[s[i]] = i;
            mp2[t[i]] = i;
        }
        return true;
    }
};