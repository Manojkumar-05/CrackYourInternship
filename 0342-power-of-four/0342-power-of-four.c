bool isPowerOfFour(int n) {
    long long it = 1;
    if(n % 4 == 0 || it == 1){
        while(it <= n){
            if(it == n) return true;
            it *= 4;
        }
    }
    return false;
}