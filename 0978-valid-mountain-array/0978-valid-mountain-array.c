bool validMountainArray(int* arr, int n){
    int asc = 1;
    if(n < 3) return false;
    for(int i = 0; i < n-1; i++){
        if(arr[i] == arr[i+1]) return false;
        if(asc && arr[i] > arr[i+1]) asc = 0;
        if(!asc && arr[i] < arr[i+1]) return false;
    }
    if(asc || arr[0] > arr[1]) return false;
    return true;
}