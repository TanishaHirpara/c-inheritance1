#include<iostream>
using namespace std;

class A{
	public :
		int a,b,c;
	   
};
class B : public A{
	public :
		void setdata()
		{
			cout<<"enter the value of a "<<endl;
			cin>>a;
			cout<<"Enter the value of b "<<endl;
			cin>>b;
			cout<<"Enter the value of c "<<endl;
			cin>>c;
			
		}
		void getdata()
		{
			cout<<"sum of cube of numbers is = "<<(a*a*a) + (b*b*b) + (c*c*c);
		}
	
};

main()
{
	B b;
	b.setdata();
	b.getdata();
	
	
}
