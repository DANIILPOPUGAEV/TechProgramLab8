#pragma once
#include<iostream>
#include"Watch.h"

using namespace std;
using namespace WatchClass;

namespace ElectronicalClass
{
	class Electronical : private Watch //закрытое наследование 
	{
	private:

		int number;
		int battery;
		int dial;

	public:

		void set_number(int n) { number = n; }
		int get_number() { return number; }

		void set_battery(int d) { battery = d; }
		int get_battery() { return battery; }

		void set_dial(int e) { dial = e; }
		int get_dial() { return dial; }

		void set_name(string a) { name = a; }
		string get_name() { return name; }

		void set_country(string b) { country = b; }
		string get_country() { return country; }

		void set_price(int c) { prise = c; }
		int get_price() { return prise; }

		void Show()
		{
			cout << "Номер: " << number << "\n" << "Название: " << name << "\n"
				<< "Цена: " << prise << "\n" << "Циферблат: " << dial << "\n"
				<< "Батарея: " << battery << "\n" << endl;
		}

		Electronical(string a, string c) { name = a; country = c; }
	};
}