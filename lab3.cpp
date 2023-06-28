#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	public:
		int hh,mm,ss;
};
int main()
{
	Time t;
	cout<<"ENTER TIME TO CONVERT IN SECONDS:-";
	cin>>t.ss;
	t.hh=t.ss/3600;
	t.mm=(t.ss%3600)/60;
	t.ss=(t.ss%3600)%60;
	cout<<"TIME FORMAT IN HH:MM:SS="<<t.hh<<":"<<t.mm<<":"<<t.ss;
	return 0;
}
