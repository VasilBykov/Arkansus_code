#include <iostream>
#include "Header_pavel.h"
using namespace std;

void duelMechanics() {
    cout << "�� ������� �����. ����� ����������!" << endl;
    int hero_health = 100, opponent_health = 100;
    while (hero_health > 0 && opponent_health > 0) {
        int action;
        cout << "��� ���: \n1. ����������\n2. ����������\n�������� ��������: ";
        cin >> action;

        if (action == 1) {
            int hit = rand() % 2; // 50% ���� �������
            if (hit) {
                int damage = rand() % 20 + 10; // ���� �� 10 �� 30
                opponent_health -= damage;
                cout << "�� ������! �������� " << damage << " �����. �������� ����������: " << opponent_health << endl;
            }
            else {
                cout << "�� ������������!" << endl;
            }
        }
        else if (action == 2) {
            cout << "�� ��������� ����������." << endl;
            int evade = rand() % 2; // 50% ���� ����������
            if (evade) {
                cout << "�� ������� ���������� �� �������� ����������!" << endl;
                continue;
            }
            else {
                int damage = rand() % 20 + 10; // ���� �� 10 �� 30
                hero_health -= damage;
                cout << "�� ������� ����������! ��������� �����, �������� " << damage << " �����. ���� ��������: " << hero_health << endl;
            }
        }
        else {
            cout << "�������� �����, �� ������� ���!" << endl;
        }

        // ��� ����������
        if (opponent_health > 0) {
            int opponent_action = rand() % 2; // 50% ���� ��������
            if (opponent_action) {
                int hit = rand() % 2; // 50% ���� �������
                if (hit) {
                    int damage = rand() % 20 + 10; // ���� �� 10 �� 30
                    hero_health -= damage;
                    cout << "��������� ��������� � �����! �������� " << damage << " �����. ���� ��������: " << hero_health << endl;
                }
                else {
                    cout << "��������� �����������!" << endl;
                }
            }
            else {
                cout << "��������� ����������." << endl;
            }
        }
    }

    if (hero_health > 0) {
        cout << "�� �������� ����� � ��������� ��� ����� ����!" << endl;
    }
    else {
        cout << "�� ��������� �����. ��������� �������� ���� �����." << endl;
    }
}