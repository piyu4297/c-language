#include <iostream>
using namespace std;
class addition{
	int a,b;
	public:
		void get()
		{
			cin>>a;
			cin>>b;
		}
		void display()
		{
			cout<<"values are:"<<a<<""<<b;
		}
		void operator + (addition obj)
		{
			addition res;
			res.a=a+obj.a;
			res.b=b+obj.b;
			cout<<" result values are:"<<res.a<<""<<res.b;
			
		}
};
int main()
{
	addition o1;
	addition o2;
	cout<<"enter two values for first object";
	o1.get();
	cout<,"enter two values for second object";
	
	o2.get()
	o1.display();
	cout<<end1;
	o2.display();
	o1+o2;
	return 0;
}
