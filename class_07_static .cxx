#include<iostream>
#include<string>
using namespace std;
class account {
	public:
	int acc;
	string name;
	static float rate;
	account(int a,string n){
		this->acc=a;
		this->name=n;
		cout<<acc<<" "<<name<<" "<<rate;
		
		
		
	}
	void display(){
		cout<<acc<<" "<<name<<" "<<rate;}
};
float account::rate=5;

int main(){
	account a1(12345,"harish");
	cout<<endl;
	a1.display();
	return 0;}