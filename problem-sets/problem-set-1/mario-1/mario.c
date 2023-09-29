#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Promt user for input
    int height;
    do
    {
        height = get_int("Height: ");
    } 
    // Set condition - height must be a positive integer between 1-8. If not, loop will be repeated
    while (height < 1 || height > 8);
    
    // Right aligned pyramid with dots    
    for (int i = 1; i <= height; i++)
    {
        
        for (int y = height; y > i; y--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++) 
        {
            printf("#");
        }
        printf("\n");
    }   
}







