#pragma once
#include <iostream>
#include <vector>
#include "member.h"
#include "works.h"
#include "jobp.h"
using namespace std;

class Office
{
	private:
	    vector<Member> mbList;
	    vector<works> worksList;
	    vector<jobP> jobPList;
	public:	   
		Office();
		void addMember();
		void outputMember();
		void addWork();
		void outputWork();
		void addDivisionOfWork();
		void sortByName();
		void sortByDays();
		void outputDivisionOfWork();
		void sumOfSalary();
};