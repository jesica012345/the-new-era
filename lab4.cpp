#include<iostream>
#include<string.h>
using namespace std;

class House
{
	public:
		int h_no;
		int room_size;
		char h_name[100];
		char h_address[100];
};
int main()
{
	House h1;
	cout<<"ENTER HOUSE NUMBER:-";
	cin>>h1.h_no;
	cout<<"ENTER ROOM NUMBER:-";
	cin>>h1.room_size;
	cout<<"ENTER HOUSE NAME:-";
	cin>>h1.h_name;
	cout<<"ENTER HOUSE ADDRESS:-";
	cin>>h1.h_address;
	
	cout<<"HOUSE NUMBER:-"<<h1.h_no<<endl;
	cout<<"ROOM NUMBER:-"<<h1.room_size<<endl;
	cout<<"HOUSE NAME:-"<<h1.h_name<<endl;
	cout<<"House ADDRESS:-"<<h1.h_address<<endl;

	return 0;
}
