#include<iostream>
using namespace std;
// Hiererchical  inheritance
class shape{
	public:
	int a,b;
	public :
	void get_shape(int n ,int m){
		
		a=n;
		b=m;
		}
};
class rectangle : public shape {
	public:
	
	
	void r_area(){
		int res=a*b;
		cout<<"area of rectangle is  :"<<res<<endl;
		
		
		
		
		}
};	
class triangle  : public shape{
	public:
	void t_area(){
		int res=0.5*a*b;
		cout<<"the area of traingle is : " <<res<<endl;
		
			}
	

		
		
		};


int main(){
	rectangle c1;
	c1.get_shape(4,5);
	c1.r_area();
	triangle c2;
	c2.get_shape(4,5);
	c2.t_area();
	
	
	
	
	
	return 0;
	
	
	
}