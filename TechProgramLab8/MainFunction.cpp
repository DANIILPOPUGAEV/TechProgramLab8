#include <iostream>
#include <vector>
#include <random>
#include"Maximum.h"
#include "Empty.h"
#include "Electronical.h"

using namespace std;
using namespace ElectronicalClass;

void MainFunction()
{
	vector<Electronical> watchs;
	vector<Electronical> reverse_watchs;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(100, 30000); //������������� ���������� ��������� �����

	for (short s = 0; s < 250; s++) 
		watchs.push_back(Electronical("Rolex", "���������"));

	for (short s = 0; s < 250; s++) 
		watchs.push_back(Electronical("MI-band", "�����"));

	for (short s = 0; s < 250; s++)
		watchs.push_back(Electronical("Omega", "���������"));

	for (short s = 0; s < 250; s++)
		watchs.push_back(Electronical("Hamilton", "���"));

	for (short i = 0; i < watchs.size(); ++i)
	{
		watchs[i].set_number(i);
		watchs[i].set_price(dist(gen));
		watchs[i].set_battery(dist(gen));
		watchs[i].set_dial(dist(gen));
	}

	for (short s = 0; s < watchs.size(); s++)
		reverse_watchs.insert(reverse_watchs.begin(), watchs[s]);

	cout << "������ ������� watchs: "<<watchs.size() << "\n";
	cout << "578-�� ������� �������:" << "\n"; 	watchs[578].Show();

	cout << "������ ��������� ������� watchs: " << reverse_watchs.size() << "\n";
	cout << "578-�� ������� ��������� �������:" << "\n"; 	reverse_watchs[578].Show();

	Maximum(watchs);

	for (short s = 0; s < 500; s++)
	{
		watchs.insert(watchs.begin() + 500, Electronical("Rolex", "���������"));
	}

	for (short s = 500; s < 1000; s++)
	{
		watchs[s].set_name("Tissot");
		watchs[s].set_country("���������");
		watchs[s].set_number(s + 500);
		watchs[s].set_price(dist(gen));
		watchs[s].set_battery(dist(gen));
		watchs[s].set_dial(dist(gen));
	}

	cout << "������ ������������ ������� watchs: " << watchs.size() << "\n";
	cout << "578-�� ������� ������������ �������:" << "\n"; watchs[578].Show();

	Maximum(watchs);

	watchs.clear();
	Empty(watchs);
}