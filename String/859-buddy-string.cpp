class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;
            

        if (s == goal) {
            set<char> character(s.begin(), s.end());
            // here 2 case:if duplicates doesn't exist like abc==abc then after
            // swapping any two char you'll never get the string goal...
            return character.size() < s.size();
        }
        vector<int> track;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                track.push_back(i);
            }
        }
        // track size must be 2 because we have onle 1 swap to do ...
        return track.size() == 2 && s[track[0]] == goal[track[1]] &&
               s[track[1]] == goal[track[0]];

      
    }
};
