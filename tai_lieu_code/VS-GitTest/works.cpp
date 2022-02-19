#include "works.h"
int works :: id2 = 100;
works :: works(){};
int works :: getIDWork()
{
	return this -> idWork;
}
void works :: setIDWork()
{
	this -> id2++;
	this -> idWork = this -> id2;
}
string works :: getNameWork()
{
	return nameWork;
}
int works :: getBonus()
{
	return bonus;
}
int works :: getDays()
{
	return this -> days;
}
void works :: inputDays()
{
	cout << "Nhap vao so ngay lam viec: ";
    cin >> days;
}
void works :: outputDays()
{
	cout << "So ngay lam viec la: ";
    cout << days << "\n";
}
void works :: inputWork()
{
	cout << "Nhap vao ten vi tri cong viec: ";
    cin >> nameWork;
	cout << "Nhap vao muc thuong: ";
    cin >> bonus;
}
void works :: outputWork()
{
	cout << "Ma vi tri cong viec: " << idWork << "\n";
	cout << "Ten vi tri cong viec: " << nameWork << "\n";
	cout << "Muc thuong: " << bonus << "\n";
}