#include <iostream>
#include<stdlib.h>
#include<ctime>
#include"../include/game.h"

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
            cout << " Attempts left ===== "<< attempts << endl;
            cout << " Lower" << endl;
        }
        else
        {
            system("cls");
            cout << " Attempts left ===== "<< attempts << endl;
            cout << " Higher" << endl;
        }
        attempts--;
        if (attempts == -1)
        {
            system("cls");
            cout << " Your attempts have unfortunately ended ):\n";
            cout << " The correct guess is " << CorrectNo << endl;
        }
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
    cout << "***This is our first project!***\n" << endl;
    srand(time(0));

    SecNum = 0 + rand() % (100 - 0 + 1);
    cout << "---welcome to the guessing game---\n";
    cout << " Press Enter to start the game^^ \n";
    cin.get();
    system("cls");
    cout << " Now guess a number between 0 to 100 " << endl;

    while(gameOn == 0)
    {
        int frame = process(SecNum);
        gameOn = frame;
    }
    return 0;

}


