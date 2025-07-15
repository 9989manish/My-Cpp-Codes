class Solution {
public:
    int maxDepth(string s) {

        int count = 0;
        int max_para = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {

                count++;
                max_para = max(max_para, count);
            }
            if (s[i] == ')') {
                count--;
            }
        }
        return max_para;
    }
};