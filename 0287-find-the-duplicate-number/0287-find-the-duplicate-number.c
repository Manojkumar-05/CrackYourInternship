int findDuplicate(int* arr, int n) {
    int seen[n+1];
    for(int i = 0; i < n; i++) seen[i] = 0;
    for(int i = 0; i < n; i++){
        if(seen[arr[i]] == 0) seen[arr[i]]++;
        else return arr[i];
    }
    return 0;
}