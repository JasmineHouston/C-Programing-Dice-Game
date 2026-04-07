#include <iostream>  // input and output
#include <cstdlib>   // rand() and srand()
#include <ctime>     // time()

using namespace std;

// Function simulate single dice roll
int rollDice() {
    return rand() % 6 + 1; // Generates a random number from 1 to 6
}

int main() {
    // Seed the random number generator once at the start
    srand(static_cast<unsigned int>(time(0)));

    int player1Score, player2Score;

    // Simulate Player 1 turn
    int d1 = rollDice();
    int d2 = rollDice();
    player1Score = d1 + d2;
    cout << "Player 1 rolled: " << d1 << " + " << d2 << " = " << player1Score << endl;

    // Simulate Player 2 turn
    d1 = rollDice();
    d2 = rollDice();
    player2Score = d1 + d2;
    cout << "Player 2 rolled: " << d1 << " + " << d2 << " = " << player2Score << endl;

    // Determine winner
    if (player1Score > player2Score) {
        cout << "Player 1 wins!" << endl;
    } else if (player2Score > player1Score) {
        cout << "Player 2 wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
