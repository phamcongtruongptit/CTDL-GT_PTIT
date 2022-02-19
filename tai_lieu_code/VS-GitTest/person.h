#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
	protected:
		string name;
		string address;
		string phone;
	public:
		Person(){};
		Person(string name, string address, string phone)
        {
			this -> name = name;
			this -> address = address;
			this -> phone = phone;
		}
};