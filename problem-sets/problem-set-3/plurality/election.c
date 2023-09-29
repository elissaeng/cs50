#include "cs50.h"
#include <stdio.h>
#include <string.h>

#define MAX 3

// Use a struct to define the candidate structure
typedef struct 
{
	string name;
	int votes;
}
candidate;

// Create an array to store candidates
candidate candidates[MAX];

// create a variable to track the number of candidates
int candidate_count;

// vote and print_winner Function declarations
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
	// Check for invalid usage
	if (argc < 2)
	{
		printf("Please give another candidate option\n.");
	}

	// subtract 1 from argc to not include the program name, but only the additional arguments provided by the user
	candidate_count = argc - 1;

	// Make sure there aren't too many candidates from the user
	if (candidate_count > MAX)
	{
		printf("Max number of candidates is %i\n", MAX);

		return 2;
	}
	
	// For loop to initialize the list of candidates with their names and vote counts
	for (int i = 0; i < candidate_count; i++)
	{
		candidates[i].name = argv[i + 1];
		// Sets the initial vote count to zero, since no votes have been cast yet
		candidates[i].votes = 0;
	}

	// get number of voters from the user
	int vote_count = get_int("number of voters: \n");

	// Loop over all voters (Whatever amount the user decided on)
	for (int i = 0; i < vote_count; i++)
	{
		// Get the name of the candidate the voter is voting for
		string name = get_string("Vote: ");
		vote(name);
	}

	// Invoke the print_winner function (Display the winner of election)
	print_winner();

}

// Function to record a vote for a candidate
bool vote(string name)
{
	// Loop through the list of candidates
	for (int i = 0; i < candidate_count; i++)
	{
		if (strcmp(name, candidates[i].name) == 0)
		{
			// If a candidates name matches the name the voter chose, add a vote for the candidate	
			candidates[i].votes++;
			return true;
		}
	}  
	return false;
}
  	
// Function to find and print the winner(s) of the election
void print_winner(void)
{
	// Initialize variables to keep track of the winner(s) and maximum number of votes	
	string winner = candidates[0].name;
	int max_votes = candidates[0].votes;

	// Loop through all candidates 
		// (it starts with i = 1, because we make the assumption that whichever the first candidate is (candidates[0]) is initially the candidate w/the most votes aka 'the current winner!')
	for (int i = 1; i < candidate_count; i++)
	{
		// Check if the current candidate at (index i) has more votes than the "current winner" 
		if (candidates[i].votes > max_votes)
		{
			// Update the 'winner' variable to hold the name of the candidate with the most votes encountered so far
			winner = candidates[i].name;
			// Update/Keep track of the maximum number of votes so far
			max_votes = candidates[i].votes;
		}
	}

	printf("The winner(s): ");

	// Print the name(s) of the winner(s) of the election
	for (int i = 0; i < candidate_count; i++)
	{
		if (candidates[i].votes == max_votes)
		{
			printf("%s\n", candidates[i].name);
		}
	}
}



				
				


	
