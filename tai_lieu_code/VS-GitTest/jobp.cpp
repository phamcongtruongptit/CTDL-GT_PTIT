#include "roster.h"
jobP :: jobP(){};
void jobP :: setMember(Member member)
{
	this -> member = member;
}
void jobP :: setWork(vector<works> work)
{
	this -> work = work;
}
Member jobP :: getMember()
{
	return this -> member;
}
vector<works> jobP :: getWork()
{
	return this -> work;
}
bool cmp2(works a, works b)
{
	return a.getDays() > b.getDays();
}
void jobP :: sortByDays()
{
	sort(work.begin(), work.end(), cmp2);
}