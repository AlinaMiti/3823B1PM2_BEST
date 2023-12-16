#include <math.h>
#include <stdlib.h>

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++){
        switch(comands[i]){
            case 1: {
                for(int q = 0; q < size; q++){
                        array[q] ++;
                } 
                break;
            }
            case 2: {
                for(int w = 0; w < size; w++){
                    array[w] = sqrt(fabs(array[w]));
                } 
                break;
            }
            case 3: {
                double sr = 0.0;
                for(int r = 0; r < size; r++){
                    sr += array[r];
                }
                sr /= size;
                for(int t = 0; t < size; t++){
                    array[t] = pow((fabs(array[t])), sr);
                }
                break;
            }
            case 4: {
                for(int y = 0; y < size; y++){
                if ((int)array[y]%2 == 0) array[y] = array[y]*(-1);
                else array[y] = 1/fabs(array[y]);
                }
                break;
            }
            case 5:{
                for(int s = 0; s < size; s++){
                    if (((int)array[s]%2 == 0) && (s % 2 == 0) ){
                        array[s] = 0;
                    }
                }
                break;
            }
            case 6: {
                for(int j = 0; j < size; j++){
                    if (j < size/2 + 1)
                        array[j] = 0;
                    else array[j] = 1;
                }
                }
            }
        }
         return;
        }

    
   

