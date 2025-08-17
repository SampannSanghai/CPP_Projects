#include <iostream>
#include <ctime>

using namespace std;

/*In this project we build anumber guessing game where computer randomly selects a number.
and we have to guess it. The computer checks if our guess is higher or lower than the number it selected and outputs the same.*/

int main()
{

    srand(time(0));

    int player_guess;
    int tries = 0;
    int computer_num = (rand() % 100) + 1;

    cout << "Computer has a number guess !!" << endl;

    while (player_guess != computer_num)
    {
        cout << "Enter number you want to guess : ";
        cin >> player_guess;

        tries++;

        if (player_guess > computer_num)
        {
            cout << "Guess is Higher than the number" << endl;
        }
        else if (player_guess < computer_num)
        {
            cout << "Guess is Lower than the number" << endl;
        }

        if (player_guess == computer_num)
        {
            break;
        }

        cout << "Try again" << endl;
    }

    cout << "You Finally guessed the right number in : " << tries << " tries";
}