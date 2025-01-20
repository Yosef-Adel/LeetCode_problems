class Solution {
public:
    string greatestLetter(string s) {
vector<bool> lower(26);
    vector<bool> upper(26);
    for (auto c : s) {
        if (isupper(c)) upper[c - 'A'] = true;
        else lower[c - 'a'] = true;
    }
    for (int i = 25; i >= 0; i--) {
        if (upper[i] && lower[i]) {
            return string(1, i + 'A');
        }
    }
    return "";
    }
};