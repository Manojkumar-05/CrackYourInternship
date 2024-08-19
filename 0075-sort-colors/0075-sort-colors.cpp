class Solution {
public:
    void sortColors(vector<int>& arr) {
        int zero = 0, one = 0, i = 0, n = arr.size();
        for(int n : arr) {
            if(n == 0) zero++;
            if(n == 1) one++;
        }
        one += zero;
        while(i < zero) arr[i++] = 0;
        while(i < one) arr[i++] = 1;
        while(i < n) arr[i++] = 2;
    }
};