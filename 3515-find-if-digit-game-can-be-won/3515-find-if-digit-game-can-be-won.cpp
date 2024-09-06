class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int one = 0, two = 0;
        for(int n : nums){
            if(n > 9) two += n;
            else one += n;
        }
        return one != two;
    }
};