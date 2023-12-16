#include <math.h>
#include <string.h>
#include <ctype.h>

int is_palindrom(char text[]){
    char str[20];
    int j = 0;
    for (int i = 0; i < strlen(text); i++){
        if (text[i] != '!' && text[i] != ',' && text[i] != '\'' && text[i] != ' '){
            str[j] = (char)tolower(text[i]);
            j ++;
        }
    }
    str[j] = '\0';


    int len = strlen(str);
    int a = 0;
    if (len > 1){
        for (int i = 0; i < len/2; i++){
        int j = len - i - 1;
        if (str[i] == str[j]){
            a = 0;
        }
        else{
            a = 1;
            break;
        }
    }
    }
    else{
        a = 0;
    }

    
    if (a == 0){
        return 1;
    }
    else{
        return 0;
    }
}
