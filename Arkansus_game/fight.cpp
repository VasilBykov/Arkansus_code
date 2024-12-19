#include <iostream>
#include "structure.h"

using namespace std;

void fight(int enemy_max_damage, int enemy_protection, int enemy_health)
{
    int player_health = 100;
    int player_protection = 15;
    int player_min_damage = 0, player_max_damage = 15;

    int enemy_min_damage = 0;

    if (enemy_health <= 0 || enemy_max_damage <= 0 || enemy_protection <= 0)
    {
        enemy_health = 15;
        enemy_max_damage = 2;
        enemy_protection = 1;
    }

    while (player_health > 0 && enemy_health > 0)
    {
        cout << "�������!\n";

        // ����� ������:
        if (rand() % 100 >= enemy_protection)
        {
            int damage = rand() % (player_max_damage - enemy_protection) + player_min_damage;
            enemy_health -= damage;
            cout << "���, �� ������� " << damage << " ����� �����. ���������� �������� �����: " << enemy_health << endl;
        }
        else
        {
            cout << "��, � �� �������� �������� ����!" << endl;
        }

        // ����� �����: 
        if (enemy_health > 0)
        {
            if (rand() % 100 >= player_protection)
            {
                int damage = rand() % (enemy_max_damage - player_protection + 1) + enemy_min_damage;
                player_health -= damage;
                cout << "���, �� ���������� �� " << damage << " �����. ���� ���������� ��������: " << player_health << endl;
            }
            else
            {
                cout << "�� ���������� �� ����� �����!" << endl;
            }
        }
    }

    // ��������� ��������:
    if (player_health > 0)
    {
        int karma_points = 1;
        game_points(karma_points);
        cout << "�� �������� �����! ���� ���� ��� ����� ����������...\n";
    }
    else
    {
        int karma_points = -3;
        game_points(karma_points);
        cout << "�� ���������... �� ������, � ��������� ��� ����������� ���������...\n";
    }
}