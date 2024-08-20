class Solution {
public:
    bool isPrime(int n){
        for(int i = 4; i <= n/2; i++)
            if(n % i == 0) return false;
        return true;
    }
    bool isPali(int n){
        int n1 = n, sum = 0;
        while(n){
            sum = (sum * 10) + n % 10;
            n /= 10; 
        }
        return sum == n1;
    }
    int primePalindrome(int n) {
        if(n == 1) return 2;
        while(1){
            if(n == 2 || n == 3 || n == 5) return n;
            if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0){n++; continue;}
            if(isPali(n) && isPrime(n)) return n;
            n++;
        }
        return 0;
    }
};