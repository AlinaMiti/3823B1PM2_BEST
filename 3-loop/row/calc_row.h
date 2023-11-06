long long calc_row(int n, long long k){
    
    long long sum = 0;
    long long term = k;
    for (int i = 1; i <= n; i++) {
        sum += term;
        term += k;
        
    }
    if (sum > 9223372036854775807 || sum < -9223372036854775807)
        return 0;
    return sum;
}
    