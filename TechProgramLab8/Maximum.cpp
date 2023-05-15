#include <iostream>
#include <vector>
#include <random>
#include "Electronical.h"

using namespace std;
using namespace ElectronicalClass;

void Maximum(vector<Electronical> watchs)
{
	string NameOfWatch;
	int max = 0;

	for (short i = 0; i < watchs.size(); ++i)
	{
		if (max < watchs[i].get_price())
		{
			max = watchs[i].get_price();
			NameOfWatch = watchs[i].get_name();
		}
	}
	cout << "Самый дорогой экземпляр: " << NameOfWatch << " (" << max << " Руб.)" << "\n"<< endl;
}