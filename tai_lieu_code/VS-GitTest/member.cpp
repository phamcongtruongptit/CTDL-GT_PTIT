#include "member.h"
int Member :: id1 = 100;
Member :: Member(){};
Member :: Member(string name,string address, string phoneNumber, int salary)
{
	this -> salary = salary;
}
string Member :: getName()
{
	return this -> name;
}
string Member :: getAddress()
{
	return this -> address;
}
string Member :: getPhoneNumber()
{
	return this -> phone;
}
int Member :: getSalary()
{
	return salary;
}
int Member :: getID()
{
    return this -> idMember;
}
void Member :: setID()
{
	this -> id1++;
	this -> idMember = this -> id1;
}
void Member :: inputMember()
{
	cout << "Nhap ho ten: ";
    cin >> name;
	cout << "Nhap dia chi: ";
    cin >> address;
	cout << "Nhap so dien thoai: ";
    cin >> phoneNumber;
	cout << "Nhap muc luong: ";
    cin >> salary;
}
void Member :: outputMember()
{
	cout << "Ho ten: " << name << "\n";
	cout << "Dia chi: " << address << "\n";
	cout << "So dien thoai: " << phone << "\n";
	cout << "Ma thanh vien: " << idMember << "\n";
	cout << "Muc luong: " << salary << "\n";
}
