class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // simple addition like...
        //    num= 1 2 0 0
        //   k=    0 0 3 4     k decrease so k/10..
        //        ____________
        //         1 2 3 4   we start from right most and manage carry ...

        vector<int> res;
        int i = num.size() - 1;

        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
                i--;
            }
            res.push_back(k % 10);
            k /= 10;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};