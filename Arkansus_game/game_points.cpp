#include <iostream>
#include <iomanip> 
#include "structure.h"

using namespace std;

int karma = 0;

void game_points(int karma_points)
{
    char symbol = '-';

    karma += karma_points;
    cout << setw(83) << setfill(symbol) << symbol << endl;
    cout << "\t *Итоги дня*\n";
    cout << "Ваша карма: " << karma << " xp\n";
}

void game_points_result()
{
    int karma_limit = 71;

    if (karma >= karma_limit)
    {
        cout << "Вы стали отличным мером! Так держать!\n";
    }
    else if (karma == karma_limit / 2)
    {
        cout << "Неплохо, но можно было и лучше!\n";
    }
    else
    {
        cout << "К сожалению, вы плохой мэр :(\n";
    }
}