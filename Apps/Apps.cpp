#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int TakeAGuess(int CorrectNo)
{
    int g_number = 0;
    cin >> g_number;

    if (g_number != CorrectNo)
    {
        if (g_number > CorrectNo)
        {
            cout << "Lower" << endl;
        }
        else
        {
            cout << "Higher" << endl;
        }
        return 0;
    }
    cout << CorrectNo <<" is Correct!"
    return 1;
}

int main()
{
    int gameOn = 0;
    cout << "***This is our first project!***" << endl;
    srand(time(0));

    int SecNum = 0 + rand() % (100 - 0 + 1);


    cout << "Guess a number" << endl;

    while(gameOn == 0)
    {
        int result = TakeAGuess(SecNum);
        gameOn = result;
    }

}


