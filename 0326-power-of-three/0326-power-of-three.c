bool isPowerOfThree(int n) {
    long long it = 3;
    if(n == 1) return true;
    if(n % 3 == 0){
        while(it <= n){
            if(it == n) return true;
            it *= 3;
        }
    }
    return false;
}