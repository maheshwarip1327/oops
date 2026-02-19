#include <iostream>
using namespace std;

int main() {
    int correctNumber = 37;
    int guess;
    int attempts;
    char playAgain;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    do {
        attempts = 0;

        while (true) {
            cout << "Enter your guess:";
            cin >> guess;
            attempts++;

            if (guess > correctNumber) {
                cout << "To high! Try again" << endl;
            }
            else if (guess < correctNumber) {
                cout << "To low! Try again" << endl;
            }
            else {
                cout << "Congratulations! You guessed the number in "
                     << attempts << " attempts!" << endl;
                break;
            }
        }

        cout << "Do you want the play again?(y/n):";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye!" << endl;

    return 0;
}
