#pragma once
#include <bits/stdc++.h>
#include "member.h"
#include "works.h"
using namespace std;

class jobP
{
	private:
		Member member;
    	vector<works> work;
	public:
    	jobP();
    	Member getMember();
		vector<works> getWork();
		void setMember(Member member);
		void setWork(vector<works> work);
		void sortByDays();
};