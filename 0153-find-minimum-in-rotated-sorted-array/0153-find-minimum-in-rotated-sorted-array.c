int bs(int* arr, int n){
    if(arr[0] < arr[n-1]) return arr[0];
    int start = 0, end = n - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(mid < n && arr[mid] > arr[mid + 1]) return arr[mid+1];
        else if(mid > 0 && arr[mid] < arr[mid-1]) return arr[mid];
        else if(arr[mid] < arr[0] && arr[mid] > arr[mid-1]) end = mid - 1;
        else start = mid + 1;
    }
    return end;
}

int findMin(int* arr, int n) {
    if(n == 1) return arr[0];
    return bs(arr, n);
}