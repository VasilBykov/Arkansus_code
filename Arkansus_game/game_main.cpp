#include <iostream>
#include "structure.h"

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int menu_selection;

	cout << "1 - ����� ���� \n";
	cout << "2 - ����������� ������� ������ \n";
	cout << "3 - ����� �� ���� \n";

	do
	{
		cout << "-> "; cin >> menu_selection;
	} while (menu_selection < 1 || menu_selection > 3);

	switch (menu_selection)
	{
	case 1:
	{
		event_selection();
		break;
	}
	case 2:
	{
		break;
	}
	default:
		exit(0);
		break;
	}

	return 0;
}