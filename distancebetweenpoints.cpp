#include <iostream>
#include <cmath>

using namespace std;

class Point
{
	int x , y;
	friend Point distance( Point a1 , Point a2);
	public:
	
		Point ()
		{
		int a,b ;
		cout<<"Enter coordinate of the point : ";
		cin>>a>>b;
		x = a;
		y = b;	
		}
		
		
		void display_point()
		{
			cout<<"\nThe point is "<<"("<< x <<","<< y 			<<")"<<endl;
		}
		
		
};

Point distance( Point a1 , Point a2 )
{
	cout<<"The distance between points is "<<sqrt( (a1.x-a2.x)*(a1.x-a2.x) + (a1.y-a2.y)*(a1.y-a2.y) )<<" units"<<endl;
}



int main()
{
	Point a;
	a.display_point();
	
	Point b ;
	b.display_point();
	
	distance( a , b );
	
	return 0;
	
}
