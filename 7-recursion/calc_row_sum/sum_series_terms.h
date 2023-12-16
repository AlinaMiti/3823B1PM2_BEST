#include <math.h>

double sum(int n){
    if (n < 1){
        return -1;
    }
    if (n == 1){
        return 1;
    }
    else{
        return 1.0/n + sum(n-1);
    }
}
double sum2(int n){
    double sum = 0.0;
    for (int i = 0; i<n; i++){
        sum += 1.0/i;
    }
    return sum;
}

double sum_series(int n){
    double s = 0.0;
    if (n > 1000000){
        double s = sum2(n);
    }
    else{
         double s = sum(n);
    }
    return s;

}
