bool searchMatrix(int** mat, int m, int* N, int target) {
    int n = *N;
    int i = 0;
    while(i < m){
        if(mat[i][n-1] >= target) {
            int start = 0, end = n-1;
            while(start <= end){
                int mid = (start + end) / 2;
                if(mat[i][mid] == target) return true; 
                else if(mat[i][mid] < target) start = mid + 1;
                else end = mid - 1;
            }
        }           
    i++;
    }
    return false;
}