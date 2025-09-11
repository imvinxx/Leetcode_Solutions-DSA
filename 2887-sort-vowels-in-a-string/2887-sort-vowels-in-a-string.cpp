class Solution {
public:
    string sortVowels(string s) {
        vector<int> positions;
        vector<char> vow;
        string vowel = "aeiouAEIOU";
        
        for (int i = 0; i < s.size(); i++) {
            if (vowel.find(s[i]) != string::npos) {
                positions.push_back(i);
                vow.push_back(s[i]);
            }
        }

        sort(vow.begin(), vow.end());

        for (int i = 0; i < positions.size(); i++) {
            s[positions[i]] = vow[i];
        }
        return s;
    }
};
