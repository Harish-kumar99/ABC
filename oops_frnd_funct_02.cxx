#include<iostream>
using namespace std;
class B;
class A{
	int x;
	public:
	void set(int i){
		x=i;}
	friend void min(A,B);
	};
class B {
	int y ;
	public :
	void set(int j){
		y=j;}
	friend void min(A,B);
	};
void min(A a,B b){
	if(a.x<b.y){
		cout<<a.x<<endl;
		}
	else {
		cout<<b.y<<endl;
		}
}
		
int main() {
	A a;
	B b;
	a.set(10);
	b.set(20);
	min(a,b);
	return 0;}

									
									
									
											
					