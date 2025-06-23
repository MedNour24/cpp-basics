#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secret, guess ,tries = 0;

    srand(time(0));
    secret = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100 :\t";

    do {
        cin >> guess;
        tries ++;
        if (guess > secret)
            cout << "Too high ! Try again :\t";

        else if (guess < secret)
            cout << "Too Low ! Try again :\t";

        else
            cout << "Congratulations! You guessed it in : "<< tries << "tries.";
    }
    while (guess != secret);

    return 0;
}
