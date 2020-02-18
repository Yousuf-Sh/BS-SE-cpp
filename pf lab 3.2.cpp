#include<iostream>
#include<conio.h>
using namespace std;
 main()
{
 	int p,i=0;
 	
 	while(i==0)
  {
	 clrscr();
	 cout<<"Enter your percentage";
 	cin>>p;
	 if (p>=80&&p<101)
 	{
 		cout<<"\nYou have A+ Grade";
	 }
	 else if (p>=70&&p<80)
	 {
	 	cout<<"\n you have A grade";
	 }
	  else if (p>=60&&p<70)
	 {
	 	cout<<"\n you have B grade";
	 }
	 else if (p>=50&&p<60)
	 {
	 	cout<<"\n you have c grade";
	 }
	 else if (p>=40&&p<50)
	 {
	 	cout<<"\n you have D grade";
	 }
	 else if (p>=30&&p<40)
	 {
	 	cout<<"\n you have E grade";
	 }
	 else 
	 {
	 	cout<<"\nYou are failed";
	 }
    cout<<"continue? 1/0";
    cin>>i;
 }
}
 
