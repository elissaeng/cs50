#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int letter_count = 0;
int words_count = 1;
int sentences_count = 0;

int main(void)
{
    // Get user input
    string text = get_string("Text: ");

    // Call functions
    count_letters(text);
    count_words(text);
    count_sentences(text);

    // Calculate L and S
    float l = ((float) letter_count / words_count) * 100;
    float s = ((float) sentences_count / words_count) * 100;

    // Calculate Coleman Law
    float coleman_law = 0.0588 * l - 0.296 * s - 15.8;
    int rounded_coleman_law = round(coleman_law);

    if (rounded_coleman_law >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (rounded_coleman_law <= -1)
    {
        printf("Before Grade 1\n");
    }
    else 
    {
        printf("Grade: %d\n", rounded_coleman_law);
    }

    return 0;
}

// Count letters
int count_letters(string text)
{
    // get length of the string
    int letters_length = strlen(text);

    for (int i = 0; i < letters_length; i++)
    {
        if (isalnum(text[i]))
        {
            letter_count++;
        }
    }

    return letter_count;
}

// Count words
int count_words(string text)
{
    // Get length of the string
    int words_length = strlen(text);

    for (int i = 0; i < words_length; i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            words_count++;
        }
    }

    return words_count;
}

// count sentences
int count_sentences(string text)
{
    // get length of string
    int sentence_length = strlen(text);

    for (int i = 0; i < sentence_length; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences_count++;
        }
    }
 
    return sentences_count;
}




