#include <bits/stdc++.h>
#include "office.h"
using namespace std;
int main()
{
	Office office;
	int x;
	while(1)
	{
		cin >> x;
		if(x == 0) return 0;
		switch(x)
		{
			case 1: office.addMember();
				break;
			case 2: office.addWork();
				break;
			case 3: office.outputMember();
				break;
			case 4: office.outputWork();
				break;
			case 5: office.addDivisionOfWork();
				break;
			case 6: office.sortByName();
				break;
			case 7: office.sortByDays();
				break;
			case 8: office.outputDivisionOfWork();
				break;
			case 9: office.sumOfSalary();
		}
	}
	return 0;
}