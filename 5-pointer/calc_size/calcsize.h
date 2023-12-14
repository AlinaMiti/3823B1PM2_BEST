#include <math.h>


int calcsize(void* memory){
    int size = 0;
    char* arr = (char*)memory;
    
    
    for(int i = 0; i< 40; i++){
        printf("%d\n", arr[i]);
    }
    return size+2;
}





