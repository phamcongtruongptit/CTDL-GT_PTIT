#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class works
{
	protected:
		static int id2;
		int idWork;
		string nameWork;
		int bonus;
		int days;
	public:
		works();
		int getIDWork();
		void setIDWork();
		string getNameWork();
		int getBonus();
		int getDays();
		void inputDays();
		void outputDays();
		void inputWork();
		void outputWork();
};