int heightChecker(int* heights, int n) {
    int c = 0, arr[n];
    for(int i = 0; i < n; i++) arr[i] = heights[i];
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) arr[i] != heights[i] ? c++ : c;
    return c;
}