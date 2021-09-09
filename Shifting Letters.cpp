class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int t = 0;
        for (int i=s.size()-1; i>=0; --i) 
        {
            t = (t + shifts[i]) % 26;
            s[i] = (s[i] - 'a' + t) % 26 + 'a';
        }
        return s;
    }
};
