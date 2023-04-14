#include "main.h"
/*
 * puts_half -function that prints half of a string.
 * @char
 * return nothing. 
*/
void puts_half(char *str){
    int b, i = 0;    
    while(str[i] != '\0'){
        i++;
    }
    if(i % 2 == 0){
        int half = i / 2;
        while (half <= i){
            _putchar(str[half]);
            half++;
        }
    } else{
        int half = (i - 1) / 2; 
        while(half <= i){
            _putchar(str[half]);
            half++;
        }  
    }
    _putchar('\n');
}