#include <iostream> // NUMBER GUESSING GAME
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int num = (rand() % 100) + 1;

    int guess = 0;

    do
    {

        cout << "Enter your Guess (1-100): ";
        cin >> guess;

        if (guess > num)
            cout << "Guess is too high! , please retry." << endl;
        else if (guess < num)
            cout << "Guess is too low! , please retry." << endl;
        else
            cout << "You have guessed correctly!" << endl;

    } while (guess != num);

    return 0;
}
