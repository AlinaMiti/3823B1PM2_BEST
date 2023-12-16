#include <math.h>

char find_bin_pattern(int number){
    int arr[50] = {0};
    int cnt = 0;
    while (number>0){
        arr[cnt] = number%2;
        number /= 2;
        cnt += 1;
    }
    int count = 0;
    for (int i = 0; i < cnt; i++){
        if(arr[i] == 1 && arr[i+1] == 0 && arr[i+2] == 1){
            count += 1;
        }
    }
    return count;
}