bool isHappy(int n) {
    int sum  = 0;
    do{
        sum = 0;
        while(n){
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        n = sum;
    }while(n > 9);
    return n == 1 || n == 7;
}