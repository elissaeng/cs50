#include "cs50.h"
#include <stdio.h>

// WORKS FOR MATH EQUATION
// int main(void)
// {
//   int n = get_int("Start size: ");
//   // int z = get_int("End size: ");
//   int result = n + (n / 3) - (n / 4);
//   printf("%i\n", result);
// }

// /////////////////////////////////

// int main(void)
// {
//   int n;
//   int z;
//   n = get_int("Start size: ");
//   z = get_int("End size: ");
//   // y = get_int("Years: ");

//   // int result = n + (n / 3) - (n / 4);
  
//   // int years = 0;

//   // for (int result = 0; result < z; years++)
//   // {
    
   
//   //   printf("Years: %i\n", years);
//   // }

//   while

// }


// /////////////////////////////////

int main(void)
{
    // TODO: Prompt for start size
  	int start; 
  	do
  	{
   		start = get_int("Start size: ");
  	} 
  	while (start < 9);
  

    // TODO: Prompt for end size
  	int end;
    do
    {
      end = get_int("End size: ");
      
    } 
    while (end < start);

	// Keep track of number of years
	int years = 0;
	
	// TODO: Calculate number of years until we reach threshold
	while (start < end)
	{
		start = start + (start / 3) - (start / 4);
		years++;
	}

//     // TODO: Print number of years
	printf("Years: %i\n", years);
}
