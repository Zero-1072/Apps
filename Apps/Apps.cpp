#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<ios>

using namespace std;

int TakeAGuess(int CorrectNo)
{
    int g_number = 0;
    cin >> g_number;

    if (g_number != CorrectNo)
    {
        if (g_number > CorrectNo)
        {
            system("cls");
            cout << "Attempts left ===== 10" << endl;
            cout << "Lower" << endl;
        }
        else
        {
            system("cls");
            cout << "Attempts left ===== 10" << endl;
            cout << "Higher" << endl;
        }
        return 0;
    }
    cout << CorrectNo <<" is Correct!";
    return 1;
}

void AwaitGameStart()
{

}

int main()
{
    int x = 0;
    x = getchar();
    cout << x << endl;
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


