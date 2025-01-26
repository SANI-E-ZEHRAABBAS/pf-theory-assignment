#include<iostream>
using namespace std;

// Function to display the instructions
void displayInstructions() {
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "In this game, the computer will choose a random number between 1 and 100." << endl;
    cout << "You have 4 chances to guess the number." << endl;
    cout << "After each incorrect guess, the game will tell you whether your guess is too small or too large." << endl;
    cout << "Good luck!" << endl << endl;
}

// Function to play the game
void playGame() {
    int number = 57; // Hardcoded number for demonstration (as a substitute for randomization)
    int guess, attempts = 0;
    bool correctGuess = false;
    
    cout << "Try to guess the number between 1 and 100!" << endl;

    // Allow 4 attempts
    while (attempts < 4 && !correctGuess) {
        cout << "Attempt " << attempts + 1 << ": Enter your guess: ";
        cin >> guess;
        
        if (guess < number) {
            cout << "Your guess is too small!" << endl;
        } else if (guess > number) {
            cout << "Your guess is too large!" << endl;
        } else {
            correctGuess = true;
            cout << "Congratulations! You've guessed the correct number!" << endl;
        }
        
        attempts++;
    }
    
    if (!correctGuess) {
        cout << "Sorry, you've used all your attempts! The correct number was " << number << "." << endl;
    }
}

int main() {
    char choice;

    // Display instructions
    displayInstructions();

    do {
        // Play the game
        playGame();

        // Ask the user if they want to continue
        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y'); // Repeat if user wants to play again

    cout << "Thanks for playing the Guessing Game!" << endl;
    return 0;
}

