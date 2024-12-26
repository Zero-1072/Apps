#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<ios>

using namespace std;

int gameOn = 0;
int attempts = 10;
int SecNum = 0;

int TakeAGuess(int CorrectNo)
{
    int g_number = 0;
    cin >> g_number;

    if (g_number != CorrectNo)
    {
        if (g_number > CorrectNo)
        {
            system("cls");
            cout << "Attempts left ===== "<< attempts << endl;
            cout << "Lower" << endl;
        }
        else
        {
            system("cls");
            cout << "Attempts left ===== "<< attempts << endl;
            cout << "Higher" << endl;
        }
        attempts--;
        return 0;
    }
    system("cls");
    cout << CorrectNo <<" is Correct!";
    return 1;
}

int process(int SecNum)
{
	int result = TakeAGuess(SecNum);
 	return result;
}

int main()
{

    cout << "***This is our first project!***" << endl;
    srand(time(0));

    SecNum = 0 + rand() % (100 - 0 + 1);

    cout << "Guess a number" << endl;

    while(gameOn == 0)
    {
        int frame = process(SecNum);
        gameOn = frame;
    }
    return 0;

}


