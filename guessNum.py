#!/usr/bin/python

'''
guessNum.py

Written by Justin Ryburn (jryburn@juniper.net)
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
        while True: # Keep looping until the user guesses correctly.
            guess = input('Guess a number between %d and %d: ' % (low, high))
            if guess < answer: # Guess is too low.
                print 'You guessed too low. Try again.'
            elif guess > answer: # Guess is too high.
                print 'You guessed too high. Try again.'
            elif guess == answer: # User got it.
                print 'You are correct! Congratulations!!'
                break # Exit the loop once they get it right.

# Main function call
if __name__ == '__main__':
    main()
