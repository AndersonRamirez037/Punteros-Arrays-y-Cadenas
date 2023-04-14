#include "main.h"
/*
 * print_rev - function that prints a string in reverse.
 * @char
 * return nothing.
*/
void print_rev(char *s){
    int b, i = 0;    
    while(s[i] != '\0'){
        i++;
    }
    for(b = i; b >= 0; b--){
         _putchar(s[b]);
    }
    _putchar('\n');
}