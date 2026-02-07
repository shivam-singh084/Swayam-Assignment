class Solution {
public:
    int minimumDeletions(string s) {
        int cnt_a = 0;
        int n = s.length();
        for(int i = n-1; i >= 0; i--){
            if(s[i] == 'a'){
                cnt_a++;
            }
        }

        int cnt_b = 0;
        int del = INT_MAX;

        for(int i = 0; i < n; i++){
            if(s[i] == 'a'){
                cnt_a--;
            }
            del = min(del, cnt_a + cnt_b);

            if(s[i] == 'b'){
                cnt_b++;
            }
        }
        return del;
    }
};