bool point_in_rectangle(double x, double y) {
    int a = 0;
    scanf_s("%d %d", &x, &y);
    if (x >= -5 || x <= 5 || y <= 5 || y >= -5){
        return true;
        a += 1;
    }
    else {
        return false; // Not implementation
    }
    printf("%d", a);
}

bool point_in_square(double x, double y) {
    if(((x - 6)^2 + (y - 6)^2) > 49){
        return false; // Not implementation
    }
    else{
        return true;
    }
}

bool point_in_triangle(double x, double y) {
    return false; // Not implementation
}

int number_fugures(double x, double y) {
    return 0; // Not implementation
}
