#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// Function to check if a string consists only of digits
bool only_digits(string s);
// Function to rotate a character by a given number of positions
char rotate(char c, int n);

int main(int argc, string argv[]) 
{
    // Get user input
    // string plaintext = get_string("Plaintext: ");

    // Check command-line argument count and make sure it is just one
    if (argc != 2)
    {
        // print usage message and return error code
        printf("Usage: ./caesar key - Please provide a single line argument\n");
        return 1;
    }
    
    // Check if key consists only of digits
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key - Key must be a positive integer\n");
        return 1;
        
    }

    if (argc > 2)
    {
         printf("Usage: ./caesar key - Too many arguments provided\n");
        return 1;
    }


    // Convert the key from string to an integer
    int key = atoi(argv[1]);

    // Get user input
    string plaintext = get_string("Plaintext: ");

    // Get length of plaintext
    int plaintext_length = strlen(plaintext);

    // Encrypt and print the ciphertext
    printf("ciphertext: ");
    for (int i = 0; i < plaintext_length; i++)
    {
        if (isalpha(plaintext[i]))
        {
            // Rotate alphabetic characters
            char rotated_char = rotate(plaintext[i], key);
            printf("%c", rotated_char);
        }
        else
        {
            // Non-alphabetic numbers remain unchanged
            printf("%c", plaintext[i]);
        }
    }
    // Print a newline
    printf("\n");

    // Return 0 to indicate successful execution
    return 0;
}

// Function to check if a string consists only of digits
bool only_digits(string s)
{
    // Get length of s
    int length = strlen(s);

    // Loop through each character in the string s
    for (int i = 0; i < length; i++)
    {
        // If a character is not a digit return false
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    // All characters are digits, so return true
    return true;
}

// Function to rotate a character by a given number of positions
char rotate(char c, int n)
{
    // If c is an uppercase letter
   if (isupper(c))
   {
        // calculate rotated ASCII value using key n
        int rotated_ascii = ((c - 'A' + n) % 26) + 'A';
        return (char)rotated_ascii;
   } 
   else if (islower(c))
   {
        int rotated_ascii = ((c - 'a' + n) % 26) + 'a';
        return (char)rotated_ascii;
   }
   else
   {
        return c;
   }
}



