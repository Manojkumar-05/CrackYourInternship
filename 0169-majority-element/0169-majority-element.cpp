class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> map;
        int max = 0, ans;
        for(auto n : nums) map[n]++;
        for(auto p : map){
            if(p.second > max){
                max = p.second;
                ans = p.first;
            }
        } 
        return ans;
    }
};