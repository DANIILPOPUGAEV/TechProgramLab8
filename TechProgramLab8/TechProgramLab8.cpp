﻿#include <iostream>
#include <vector>
#include <random>
#include"MainFunction.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    char operate;
    bool tf = true;
    while (tf)
    {
        system("CLS");
        cout << "Введите номер операции:\n" << "1. Запустить.\n" << "2. Закрыть.\n"; //код для меню
        cin >> operate;
        switch (operate)
        {
        case '1': system("CLS"); MainFunction(); system("pause"); break;
        case '2': tf = false;
        default:
            break;
        }
    }
}
