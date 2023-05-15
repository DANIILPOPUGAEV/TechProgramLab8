#pragma once
#include<iostream>
#include"Watch.h"

using namespace std;
using namespace WatchClass;

namespace MechanicalClass
{
	class Mechanical : public Watch //открытое наследование
	{
	private:
		int weight;
		int diametr;

	public:
		void set_weight(int f) { weight = f; }
		int get_weight() { return weight; }

		void set_diametr(int g) { diametr = g; }
		int get_diametr() { return diametr; }
	};

}