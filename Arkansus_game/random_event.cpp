#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "structure.h"

using namespace std;

void event_selection()
{
	int rmn = 1, rmx = 4;
	const int MAX = 24;
	int Game_Event[MAX];
	int choice;

	srand((unsigned)time(NULL));

	for (int i = 0; i < MAX; ++i)
	{
		Game_Event[i] = 1;
		// Game_Event[i] = rand() % rmx + rmn;
	}

	for (int i = 0; i < MAX; ++i)
	{
		choice = Game_Event[i];

		char symbol = '-';
		cout << "-День №" << i + 1 << setw(75) << setfill(symbol) << symbol << endl;

		switch (choice)
		{
		case 1:
			events_1931();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	}

	game_points_result();

	cout << "Спасибо за игру!\n";
}