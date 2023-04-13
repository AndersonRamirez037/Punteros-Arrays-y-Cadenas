#include "main.h"
/*
 * _strlen - function that prints the length of an array.
 * 
 *
*/
int _strlen(char *s){
    int i; 
    while(*s != '\0'){
        i++;
        s++;
    }
    return i;
}