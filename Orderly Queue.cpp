class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k > 1)
        {
            sort(s.begin(),s.end());
            return s;
        }
        string n = s;
        int l = s.size();
        for(int i=1; i<l; i++)
        {
            s = s.substr(1) + s.substr(0, 1);
            if(s < n)
                n = s;
        }
        return n;
    }
};
