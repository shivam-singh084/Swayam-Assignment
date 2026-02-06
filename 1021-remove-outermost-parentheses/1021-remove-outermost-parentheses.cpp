class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        for(char ch : s){
            if(ch == '('){
                if(cnt > 0){
                    ans = ans + ch;
                }
                cnt++;
            }
            else if(ch == ')'){
                cnt--;
                if(cnt > 0){
                    ans = ans + ch;
                }
            }
        }
        return ans;
    }
};