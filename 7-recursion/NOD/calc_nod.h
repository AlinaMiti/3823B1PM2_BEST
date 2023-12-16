#include <math.h>

int nod(int first, int second){
    if (first == 0){
        return -1;
    }
    if (second <= first && second == 0){
        return first;
    }
    if (first <= second && first == 0){
        return second;
    }
    if (abs(first) == 1){
        return first;
    }
    if (abs(second) == 1){
        return second;
    }
    else if(second < first){
        return nod(second, first%second);
    }
    else{
        return nod(first, second%first);
    }

}
