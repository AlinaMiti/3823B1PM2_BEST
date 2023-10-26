#include <math.h>

<<<<<<< HEAD
char count_max_digit(long long int num){
    int maxi = 0;
    int a = 0;
    if (num < 0){
        num = num * (-1);
    }
    long long int s = num;
    long long int number = num;
    while (number != 0){
        int d = number%10;
        if(d > maxi){
            maxi = d;
        }
        number /= 10;
    }
   int k = 0;
    while (s != 0){
        k = s%10;
        if( k == maxi){
            a += 1;
        }
        
        s /= 10;
    }
    return a;
=======
char count_max_digit(long long int x){
    return 100;
>>>>>>> 3c8e12c92e24078e293573bd43781dbccc3105fd
}