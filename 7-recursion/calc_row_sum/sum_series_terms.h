#include <math.h>

double sum(int n){
    if (n < 1){
        return -1.0;
    }
    if (n == 1){
        return 1.0;
    }
    else{
        return 1.0/n + sum(n-1);
    }
}

double sum2(int start, int end){
    if (end == start){
        return 1.0/start;
    }
    else{
        return 1.0/end +sum2(start, end-1);
    }
}

double sum_series(int n){
    double s = 0.0;
    if (n > 1000000){
        int step = 1000000;
        for (int i = 0; i < n; i += step){
            s += sum2(i+1, i+step);
        }
        
    }
    else{
        s = sum(n);
    }
    return s;

}
