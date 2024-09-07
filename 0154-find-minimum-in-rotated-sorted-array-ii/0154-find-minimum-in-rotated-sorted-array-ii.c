int bs(int* arr, int n){
    int start = 0, end = n-1;
    while(start <= end){ 
        if (start == end) return arr[start];
        int mid = start + (end - start) / 2;
        if(mid < end && arr[mid] > arr[mid+1]) return arr[mid+1];
        if(mid > start && arr[mid] < arr[mid-1]) return arr[mid];

        if(arr[mid] == arr[start] && arr[mid] == arr[end]){
            if(arr[start] > arr[start + 1]) return arr[start + 1];
            if(arr[end - 1] > arr[end]) return arr[end];
            start++; end--;
        }
        else if(arr[mid] >= arr[start] && arr[mid] > arr[end]) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}
int findMin(int* arr, int n){
    if(arr[0] < arr[n-1] || n < 2) return arr[0];
    if(n == 2) return arr[0] >= arr[1] ? arr[1] : arr[0];
    return bs(arr, n); 
}