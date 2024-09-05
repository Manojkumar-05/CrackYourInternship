class Solution {
public:
    string frequencySort(string s) {
        map<char, int>map;
        string ans;
        char ch;
        int max = 0, sum = 0;
        for(char c : s)map[c]++;
        while(!map.empty()){
            max = 0;
            for(auto p : map){
                if(p.second > max){
                    max = p.second;
                    ch = p.first;
                }
            }
            while(max--){
                ans.push_back(ch);
            }
            map.erase(ch);
        }
        return ans;
    }
};