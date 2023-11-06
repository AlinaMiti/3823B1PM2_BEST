int num_invers(int num){
    int invers = 0;

    while (num > 0) {
        int digit = num % 10;  
        invers = invers * 10 + digit; 
        num = num / 10;  
    }
    return invers;
}