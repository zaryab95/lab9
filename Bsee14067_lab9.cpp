#include<iostream>
using namespace std;
class ATM
{
	public:
		
		int a, b, c, d, e, s;
		ATM();
};
ATM::ATM()
{
	cout<<"\tSelect any Option:"<<endl;
	cout<<"\n1) For Withdraw Money:"<<endl;
	cout<<"\n2) For Transfer:"<<endl;
	cout<<"\n3)For Bill Payment:"<<endl;
	cout<<"\n4)For Query Of Bank Statement:"<<endl;
	cin>>e;
	
	if (e==1)
	{
		cout<<"\nEnter the amount to WithDraw:"<<end1;
		cin>>a;
	if (e==2)
	{
		cout<<"\nEnter amount to transfer:"<<end1;
		cin>>b;
	}
	if (e==3)
	{
		cout<<"\nEnter amount for bill payment:"<<end1;
		cin>>c;
	}
	if (e==4)
	{
		cout<<"\nEnter amount for query of bank statement:"<<end1;
		cin>>d;
	}
class user
{
	public:
		char  name[20];
		int pincode;
		int phonenumber=1090078601;
		user();
};
user::user()
{
	cout<<"your name:"<<end1;
	cin>>name;
	cout<<"your pincode:"<<end1;
	cin>>pincode;
	cout<<"your phonenumber:"<<end1;
	cin>>phonenumber;
};
class account
{
	public:
		char account[30];
		int Balance=10000;
		account();
};
account::account()
{
	cout<<"\nAccount type:"<<accounttype;
	cout<<"\nbalance:"<<balance;
}
