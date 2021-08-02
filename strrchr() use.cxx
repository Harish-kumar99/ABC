#include<iostream>
#include<string>
#include<cstring>
using namespace std;



int main(){
	char hey[]= "hello how are you";
	char *p;
	p=strrchr(hey,'h');
	
	cout<<p;
	
	
	
	return 0;
	
	
	
}