int addDigits(int num) {
    long long sum = 0;
    do{
        sum = 0;
        while(num){
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }while(sum > 9);

    return sum;
}