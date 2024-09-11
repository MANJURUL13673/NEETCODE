class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        //SUBSETS//////////////////////////////////
        int len = nums.size();
        int numOfSubset = pow(2, len);
        int sum = 0;
        int xOr;
        for(int i = 1; i <= numOfSubset; i++)
        {
            xOr = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(i & 1 << j) {
                    xOr ^= nums[j]; // XOR
                }
            }
            sum += xOr;
        }
        ////////////////////////////////////////////
        return sum;
    }
};