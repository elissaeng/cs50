from cs50 import get_string

# Get user input
text = get_string('Text: ')

# Count letters
letters_count = 0
def count_letters(text):
    for i in text:
        if i.isalpha():
            letters_count += 1
    return letters_count

print('Letters: ', count_letters(text))


# Count words
words_count = 1
def count_words(text):
    for i in text:
        if i == ' ':
            words_count += 1
    return words_count

print('Words: ', count_words(text))


# Count sentences
def count_sentences(text):
    sentence_count = 0
    for i in text:
        if i == '!' or i == '?' or i == '.':
            sentence_count += 1
    return sentence_count

print('Sentences: ', count_sentences(text))

# Calculate L and S
calc_l = letters_count / words_count * 100
print(calc_l)



# Call functions (C)
# Calculate L and S
# Calculate Coleman Law

# FUNCTIONS
# Count letters
    # Get length of the string
# Count words
    # Get length of the string
# Count sentences
    # Get length of the string


# Get the user's input using input() function.
# Write functions to count letters, words, and sentences. You can use similar logic to the C code you provided.
# Calculate the values of L and S using the counts obtained from step 2.
# Use the Coleman-Liau formula to calculate the index.
# Round the index to the nearest integer.
# Print the grade level according to the specifications provided.


# dinner = 'spaghetti'
# breakfast = 'cereal'
# dinner_day = 'friday'
# breakfast_day = 'Monday'

# def food(meal, day=''):
#     # return 'I ate ' + meal
#     return f'I ate {meal} on {day}'
    
# print(food(dinner, dinner_day))
# print(food(breakfast))
