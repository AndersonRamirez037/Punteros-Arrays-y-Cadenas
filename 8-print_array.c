#include "main.h"
#include <stdio.h>
/*
 * print_array - function that prints n elements of an array of integers.
 * @int
 * return nothing. 
*/
void print_array(int *a, int n){
    int i = 0;  
    while(i < n){
        printf("%i", a[i]);
        if(i != (n - 1)){
            printf(", ");
        }
        i++;        
    }
    printf("\n");
}