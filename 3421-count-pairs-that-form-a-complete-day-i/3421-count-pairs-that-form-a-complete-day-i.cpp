class Solution {
public:
    int countCompleteDayPairs(vector<int>& arr) {
        int c = 0, i, j, n = arr.size();
        for(i = 0; i < n; i++)
            for(j = i + 1; j < n; j++)
                if((arr[i] + arr[j]) % 24 == 0) c++;
        return c;
    }
};