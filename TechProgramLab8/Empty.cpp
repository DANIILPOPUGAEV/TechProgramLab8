#include <iostream>
#include <vector>
#include <random>
#include "Electronical.h"

using namespace std;
using namespace ElectronicalClass;

void Empty(vector<Electronical> watchs)
{
	if (watchs.empty())
	{
		cout << "������ ������. ������ �������: " << watchs.size() << "\n";
	}
	else
	{
		cout << "������ �� ������!"<<"\n";
	}
}
