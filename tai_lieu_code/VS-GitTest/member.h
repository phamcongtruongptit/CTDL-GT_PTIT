#pragma once
#include "Person.h"
#include <vector>
class Member : public Person
{
	protected:
		static int id1;
		int idMember;
		int salary;
	public:
		Member();
		Member(string, string, string, int);
		string getName();
		string getAddress();
		string getPhoneNumber();
		int getID();
		void setID();
		int getSalary();
		void inputMember();
		void outputMember();
};