#include<iostream>
using namespace std;

class P{
	public :
		float c1;
		void setdata()
		{
			cout<<"Enter c1 = ";
			cin>>c1;
			
		}
		
};
class Q{
	public :
		float f1,c1;
		void setter()
		{
			f1 = (c1 * 9/5) + 32;
			cout<<"temperature in fahrenheit is = "<<f1<<endl;
			 
		}
		
};
class r : public P,public Q{
	public : 
	float k1;
	void getdata()
		{
		    k1 = ((f1 - 32 ) * 5/9) + 273.15;
			cout<<"temperature in kelvin is = "<<k1<<endl;
			
		}
	
	
};

main()
{
	r r1;
	r1.setdata();
	r1.setter();
	r1.getdata();
	

	
	
}
