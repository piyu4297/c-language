#include <iostream>
using namespace std;
class A
{
	int length,width,radius,side;
	public:
		void area(int l, int w)
		{
			length=l;
			width=w;
			cout<<"area is :"<<length*width;
		}
		void area(int side)
		{
			this->side=side;
			cout<<"area is :"<<side*side;
		}
		void area(double r)
		{
			radius=r;
			cout<<"area is :"<<3.14*radius*radius;
		}
		
};
int main()
{
	A obj;
	
	cout<<"rectangle";
	obj.area
}

