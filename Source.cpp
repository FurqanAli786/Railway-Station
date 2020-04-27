
#include<iostream>
#include<conio.h>
using namespace std;
class travel
{
	public:
		void rwltolahore();
		void rwltokarachi();
		void rwltoquetta();
		void rwltopesh();
	
		
};
void travel::rwltolahore()
{
	int a;
	cout<<endl;
	cout<<" You Have Opted To Go To Lahore \n "<<endl;
	cout<<" Select Your Class \n\n 1) Exucutive.... Rs:1000 + Tax \n 2)Lower A/C..... Rs:750 + Tax \n 3) Economy..... Rs:500 + Tax \n "<<endl;
	cin>>a;
	cout<<endl;
	if(a==1)
	cout<<" Total Bill To Be Paid Including Tax Is 1000.15 Rupees "<<endl;	
	if(a==2)
	cout<<" Total Bill To Be Paid Including Tax Is 750.15 Rupees "<<endl;
	if(a==3)
	cout<<" Total Bill To Be Paid Including Tax Is 500.15 Rupees "<<endl;
}
void travel:: rwltokarachi()
{
	int a;
	cout<<endl;
	cout<<" You Have Opted To Go To Karachi \n "<<endl;
	cout<<" Select Your Class \n\n 1) Exucutive..... Rs:5000 + Tax \n 2) Lower A/C..... Rs:2500 + Tax \n 3) Economy.....Rs:1000 + Tax \n "<<endl;
	cin>>a;
	cout<<endl;
		if(a==1)
	cout<<" Total Bill To Be Paid Including Tax Is 5000.15 Rupees "<<endl;	
	if(a==2)
	cout<<" Total Bill To Be Paid Including Tax Is 2500.15 Rupees "<<endl;
	if(a==3)
	cout<<" Total Bill To Be Paid Including Tax Is 1000.15 Rupees "<<endl;
	
}
void travel::rwltoquetta()
{
	int a;
	cout<<endl;
	cout<<" You Have Opted To Go To Quetta \n "<<endl;
	cout<<" Select Your Class \n\n 1) Exucutive..... Rs:3000 + Tax \n 2) Lower A/C..... Rs:1500 + Tax \n 3) Economy..... Rs:800 + Tax \n "<<endl;
	cin>>a;
	cout<<endl;
		if(a==1)
		cout<<" Total Bill To Be Paid Including Tax Is 3000.15 Rupees "<<endl;
	if(a==2)
	cout<<" Total Bill To Be Paid Including Tax Is 1500.15 Rupees "<<endl;
	if(a==3)
	cout<<" Total Bill To Be Paid Including Tax Is 800.15 Rupees "<<endl;
}
void travel::rwltopesh()
{
	int a;
	cout<<endl;
	cout<<" You Have Opted To Go To Prshawar \n "<<endl;
	cout<<" Select Your Class \n\n 1) Exucutive.... Rs:2000 + Tax \n 2)Lower A/C..... Rs:1500 + Tax \n 3) Economy..... Rs:1000 + Tax \n "<<endl;
	cin>>a;
	cout<<endl;
	if(a==1)
	cout<<" Total Bill To Be Paid Including Tax Is 2000.15 Rupees "<<endl;
	if(a==2)
	cout<<" Total Bill To Be Paid Including Tax Is 1500.15 Rupees "<<endl;
	if(a==3)
	cout<<" Total Bill To Be Paid Including Tax Is 100.15 Rupees" <<endl;
}
int main()
{
	travel train;
	int b;
	cout<<" Choose Your Destination \n\n 1) Lahore \n 2) Karachi \n 3) Quetta \n 4) Peshawar\n "<<endl;
	cin>>b;
	if(b==1)
	train.rwltolahore();
	if(b==2)
	train.rwltokarachi();
	if(b==3)
	train.rwltoquetta();
	if(b==4)
	train.rwltopesh();
	getch();	
}