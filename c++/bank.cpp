#include<iostream>
using namespace std;
class ACCOUNT
{
	char Acc_Name[15];
	int Acc_No;
	int bal;
	int dep;
	int wid;
	int x;
	char type[15];
	public:
		void intialval();
		void deposite();
		void withdraw();
		void display(); 
};
void ACCOUNT :: intialval()
{
	bal=0;
	cout<<"Enter new Account opening Detail\n";
	cout<<"Enter name ,Acc_no,bal,type\n";
	cin>>Acc_Name;
	cin>>Acc_No;
	cin>>bal;
	cin>>type;
	
}
void ACCOUNT :: deposite()
{
	cout<<"Enter ammount to be deposite";
	cin>>dep;
	bal=bal+dep;
}
void ACCOUNT :: withdraw()
{
	cout<<"Enter amount to widrow";
	cin>>wid;
	bal=bal-wid;
}
void ACCOUNT :: display()
{
	cout<<"name of accunt holder:"<<Acc_Name;
	cout<<"\nAccount number:"<<Acc_No;
	cout<<"\nbalance:"<<bal;
	
}
int main()
{
	/*ACCOUNT A;
	A.intialval();
	A.deposite();
	A.withdraw();
	A.display();
	return 0;*/
	int x;
	ACCOUNT A;
	do
	{
		cout<<"\nYou can do the following;"
		<<"Enter appropriate number";
		cout<<"\n1 :Open new Account";
		cout<<"\n2 :Deposite  Amount";
		cout<<"\n3 :Withdraw Amount";
		cout<<"\n4 :Display  Account Detail";
		cout<<"\n5 :Exit";
		cout<<"\n\nWhat is your option";
		cin>>x;
		switch(x)
		{
			case 1 : A.intialval(); break;
			case 2 : A.deposite(); break;
			case 3 : A.withdraw(); break;
			case 4 : A.display(); break;
			case 5 : break;
			default : cout<<"Error in input , Try again";
	  	}
	}while(x!=5);
	return 0;
}
