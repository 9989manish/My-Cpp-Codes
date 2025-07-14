class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int n = candyType.size();
        set<int> diff_candy(candyType.begin(), candyType.end());

        return min(n / 2, (int)diff_candy.size());
    }
};