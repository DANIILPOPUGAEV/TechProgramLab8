#pragma once
#include<iostream>

using namespace std;

namespace WatchClass
{
	class Watch
	{
	protected: //защищенные поля

		string name;
		string country;
		int prise;

	public:

		void set_name(string a) { name = a; }
		string get_name() { return name; }

		void set_country(string b) { country = b; }
		string get_country() { return country; }

		void set_price(int c) { prise = c; }
		int get_price() { return prise; }
	};
}