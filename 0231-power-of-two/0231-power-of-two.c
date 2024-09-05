bool isPowerOfTwo(int n) {
    long long it = 2;
    if(n == 1 || n == 2) return true;
    if(n % 2 == 0){
        while(it <= n){
            if(n == it) return true;
            it *= 2;
        }
    }
    return false;
}