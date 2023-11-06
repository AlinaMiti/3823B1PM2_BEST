long fib(int m){
    int f0 = 0, f1 = 1, fn = 1, sum = 0;
    if (m >= 0){
    while (fn <= m) {
    sum += fn;
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
    }
    }
    else{
        sum = -1;
        return sum;
    } 
    
    return sum;
}