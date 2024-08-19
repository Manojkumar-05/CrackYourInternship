class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size(), idx = 1, i=0;
        if(n < 2) return 1;
        for(i = 1; idx < n; i++){
            while(arr[idx] == arr[idx-1]){
                idx++;
                if(idx==n)
                    return i;
            }
            arr[i] = arr[idx++];
        }
        return i;
    }
};