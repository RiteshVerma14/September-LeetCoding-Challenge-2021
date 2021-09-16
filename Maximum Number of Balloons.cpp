class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string b = "balloon";
        int c = 0,res = 0;
        while(1)
        {
            for(int i=0; i<b.size(); i++)
            {
                for(int j=0; j<text.size(); j++)
                {
                    if(b[i] == text[j])
                    {
                        text[j] = '1';
                        j = -1;
                        c++;
                        break;
                    }
                }
            }
            if(c == 7)
            {
                res++;
                c = 0;
            }
            else
                break;
        }
        return res;
    }
};
