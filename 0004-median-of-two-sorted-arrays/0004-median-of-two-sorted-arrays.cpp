class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        for(int n : arr2) arr1.push_back(n);
        sort(arr1.begin(), arr1.end());
        int n = arr1.size();
        for(int n : arr1) cout << n << " ";
        if(n % 2 != 0) return arr1[n/2];
        else return ((double)arr1[n/2] + (double)arr1[(n/2)-1]) / 2;
        return 0;
    }
};