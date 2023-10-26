bool compare_double(double x, double y) {
    if(fabs(x-y)< 0,000000001){
        return true; // Not implementation
    }
    else{
        return false;
    }
}

int get_nearest_int(double x) {
    if ((x - x/1) < 0.5){
        return (x/1);
        
    }
    else{
        return (x/1 + 1);
    }
    
}

double get_fractional(double x) {
    return 0.1; // Not implementation
}
