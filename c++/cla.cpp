#include<iostream>
using namespace std;
class ITEAM
{
	char name[10];
	int no;
	char add[50];
	public:
		void getdata();
		void print();
		
};
 void ITEAM :: getdata()
{
	cout<<"Enter name\n";
	cin>>name;
	cout<<"Enter number\n";
	cin>>no;
	cout<<"Enter Address\n";
	cin>>add;
}
void ITEAM :: print()
{
	cout<<"name is :"<<name;
	cout<<"\nno is :"<<no;
	cout<<"\nAdd is :"<<add;
	
}
int main(){
	ITEAM i;
	i.getdata();
	i.print();
	return 0;
}
