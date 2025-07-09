class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndex(26, 0);
        for (int i = 0; i < s.size(); i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        vector<bool> seen(26, false);
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            int curr = s[i] - 'a';
            if (seen[curr])
                continue;
            //jab tak stack ka character > incoming character or
            //age last index me wo aa rha he ki nahi..
            while (st.size() > 0 && s[i] < st.top() &&
                i < lastIndex[st.top() - 'a']) {
                seen[st.top() - 'a'] = false;
                st.pop();
            }
                st.push(s[i]);
                seen[curr]=true;
            
        }

        string res="";
        while(st.size()>0){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());//here we can't use sort(res.rbegin(),res.rend()) cuase it just sort not revers
        return res;
    }
};