#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>


// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);


int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 > score2)
    {
      printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
      printf("Player 2 wins!\n");
    }
    else
    {
      printf("Tie!\n");
    }
}

int compute_score(string word)
{
  // Compute and return score for string
  // initialize the score
  int score = 0;
  // get the length of the word
  int n = strlen(word);  

  for (int i = 0; i < n; i++)
  {
    char c = word[i];
    if (isalpha(c))
    {
      int index = toupper(c) - 'A';
      score += POINTS[index];
    }
  }

  return score;
}


// Complete the compute_score function
  // - return the number of points for the word
  // - ignore non-letter characters
  // - handle both uppercase and lowercase letters
// in main, print 'player 1 wins!', 'player 2 wins!' or 'Tie!'