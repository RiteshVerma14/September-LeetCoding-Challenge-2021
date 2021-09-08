class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res=0;
        for(int j=0; j<nums.size(); j++)
        {
            int i = j, c=0;
            while(nums[i] >= 0)
            {
                int ind = nums[i];
                nums[i] = -1;
                c++;
                i = ind;
            }
            res = max(c,res);
        }
        return res;
    }
};
