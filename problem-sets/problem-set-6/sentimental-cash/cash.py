from cs50 import get_float
import math

# Get user input for a non-negative value
while True:
    n = get_float('Money: ')
    if n >= 0:
        break

# Convert amount to cents 
amount_in_cents = round(n * 100)

# Define coin values
quarters = 25
dimes = 10
nickels = 5
pennies = 1

# Initialize variables to track the amount of each coin used
quarters_count = 0
dimes_count = 0
nickels_count = 0
pennies_count = 0

# Calculate the number of each coin needed
while amount_in_cents >= quarters:
    quarters_count += 1
    amount_in_cents -= quarters

while amount_in_cents >= dimes:
    dimes_count += 1
    amount_in_cents -= dimes

while amount_in_cents >= nickels:
    nickels_count += 1
    amount_in_cents -= nickels

while amount_in_cents >= pennies:
    pennies_count += 1
    amount_in_cents -= pennies

# Print the total count of coins needed
print('total coins:', quarters_count + dimes_count + nickels_count + pennies_count)




