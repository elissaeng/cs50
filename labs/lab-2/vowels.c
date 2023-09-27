#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>



int main(void)
{
  // get user input
  string word = get_string("Give me a word: ");

  // get length of the string
  int word_length = strlen(word);

  // initialize a count variable
  int count = 0;

  // for loop to iterate through the word
  for (int i = 0; i < word_length; i++)
  {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
    count++;
  }

  printf("the total is: %i\n", count);
}




// if statement for vowels a, e, i, o, u
// add vowels to the count variable
// print the total