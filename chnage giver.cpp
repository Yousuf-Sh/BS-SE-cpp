#include<iostream>
using namespace std;
 main()
 {
 	int _5k,_1k,_5h,_1h,_50,_20,_10,_5,_2,_1;
 	int amt;
 	cout<<"Enter the amount!! ";
 	cin>>amt;
 	_5k=amt/5000;
 	amt=amt%5000;
 	_1k=amt/1000;
 	amt=amt%1000;
 	_5h=amt/500;
 	amt=amt%500;
	_1h=amt/100;
 	amt=amt%100;
 	_50=amt/50;
 	amt=amt%50;
 	_20=amt/20;
 	amt=amt%20;
 	_10=amt/10;
 	amt=amt%10;
 	_5=amt/5;
 	amt=amt%5;
 	_2=amt/2;
 	amt=amt%2;
	 _1=amt/1;
	 cout<<"\n5 Thousand notes: "<<_5k;
	 cout<<"\n1 Thousand notes: "<<_1k;
	 cout<<"\n5 Hundred notes: "<<_5h;
	 cout<<"\n1 Hundred notes: "<<_1h;
	 cout<<"\nRS-/50 notes: "<<_50;
     cout<<"\nRS-/20 notes: "<<_20;
	 cout<<"\nRS-/10 notes: "<<_10;
	 cout<<"\nRS-/5 coins: "<<_5;
	 cout<<"\nRS-/2 coins: "<<_2; 
	 cout<<"\nRS-/1 coins: "<<_1;
	 cout<<"\n<.................---------------________---------------.................>"<<"\n"<<"\n"<<"\n"<<"\n";	
 	
 }

