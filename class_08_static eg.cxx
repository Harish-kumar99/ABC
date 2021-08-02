#include<iostream>
#include<string>
using namespace std;
class account {
	public:
	int acc;
	string name;
	static float count;
	account(int a,string n){
		this->acc=a;
		this->name=n;
		count++;
		cout<<acc<<" "<<name<<" "<<endl;
		
		
		
	}
	void display(){
		cout<<acc<<" "<<name<<" "<<count;}
};
float account::count=0;

int main(){
	account a1(12345,"harish");
	account a2(12346,"bharat");
	cout<<account::count;
	cout<<endl;
	return 0;}