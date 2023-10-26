bool compare_double(double x, double y) {
<<<<<<< HEAD
    if(fabs(x-y)< 0,000000001){
        return true; // Not implementation
    }
=======
    if ((fabs(x - y)) < 0.00000001)
        return true;
>>>>>>> 3c8e12c92e24078e293573bd43781dbccc3105fd
    else{
        return false;
    }
}

int get_nearest_int(double x) {
<<<<<<< HEAD
    if ((x - x/1) < 0.5){
        return (x/1);
        
    }
    else{
        return (x/1 + 1);
=======
    int a = x/1;
    if ((x - a) < 0.5){
        return x/1;
    }
    else{
        return x/1 + 1;
>>>>>>> 3c8e12c92e24078e293573bd43781dbccc3105fd
    }
    
}

double get_fractional(double x) {
    int a = x/1;
    if(x > 0){
        return  x - a;
    }
    else{
        if(abs(x - a) < 0.5){
            return fabs((a-1) - x);
        }
        else{
            return fabs(x - a);
        }
    }

}
