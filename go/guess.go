/************************************************************************
* Source Name: guess.go
* Program Description: This program plays the guess the number game.
* Input: Number from the user.
* Output: Tells the users whether to guess higer or lower.
* Programmer: Justin Ryburn (justin@ryburn.org)
* Date: 11/23/23
************************************************************************/

package main

// Import the needed packages
import (
	"fmt"
	"math/rand"
)

// Set the global variables
var low int = 1
var high int = 100

// Correct answer
var answer int = rand.Intn(high-low) + low

// Tells the user what to expect from the game
const (
	intro string = `This program is an old-fashion guess the number game.
You will be required to guess a number.  The computer
will pick a random number and then tell you whether
you guessed too high, too low, or guessed the number.`
)

// Ask the user to make a guess
const (
	intruct string = `
Please enter a number between 1 and 100: `
)

func main() {
	var guess int // Guess from the user
	fmt.Println(intro)
	for { // Keeping the guesses coming until the user gets it right.
		fmt.Print(intruct)
		fmt.Scanln(&guess)
		if guess < answer { // Guess is too low.
			fmt.Print(`You guessed too low. Try again.`)
		} else if guess > answer { // Guess it too high.
			fmt.Print(`You guessed too high. Try again.`)
		} else {
			fmt.Print(`You are correct! Congratulations!!`)
			break // Exit the loop once they get it right.
		}
	}
}
