#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int index1 = -1;
    int index2 = -1;
    int index3 = -1;
    for (int i = 0; i < array_size; i++){
        if ((array[i] == subarray1[0]) && (index1 == -1)){
            for (int j = 0; j < subarray_size1; j++){
                if (array[i + j] != subarray1[j]){
                    index1 = -1;
                    break;
                }
                if (array[i + j] == subarray1[j]){
                    index1 = i;
                }         
            }
        }
        if ((array[i] == subarray2[0]) && (index2 == -1)){
            for (int j = 0; j < subarray_size2; j++){
                if (array[i + j] != subarray2[j]){
                    index2 = -1;
                    break;
                }
                if (array[i + j] == subarray2[j]){
                    index2 = i;
                }         
            }
        }
        if ((array[i] == subarray3[0]) && (index3 == -1)){
            for (int j = 0; j < subarray_size3; j++){
                if (array[i + j] != subarray3[j]){
                    index3 = -1;
                    break;
                }
                if (array[i + j] == subarray3[j]){
                    index3 = i;
                }         
            }
        }
    }
    return index1 + index2 + index3;
}
