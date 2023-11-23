#!/usr/bin/python

'''
guessNum.py

Written by Justin Ryburn (justin@ryburn.org)
Last revised: 11/27/15

This script is designed to play the classic guess the number game.
'''

# Import the needed modules
import random

# Set the global variables
low = 1
high = 100

answer = random.randint(low,high) # Get our random number

def main ():
        # tells the user what this program does
        print('This program is an old-fashion guess the number game.\n'
            'You will be required to guess a number.  The computer\n'
            'will pick a random number and then tell you whether\n'
            'you guessed too high, too low, or guessed the number.\n'
            )
        while True: # Keep looping until the user guesses correctly.
            guess = int(input('Guess a number between %d and %d: ' % (low, high)))
            if guess < answer: # Guess is too low.
                print('You guessed too low. Try again.')
            elif guess > answer: # Guess is too high.
                print('You guessed too high. Try again.')
            elif guess == answer: # User got it.
                print('You are correct! Congratulations!!')
                break # Exit the loop once they get it right.

# Main function call
if __name__ == '__main__':
    main()
