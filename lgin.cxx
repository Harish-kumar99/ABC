#include<iostream>
#include<string>
using namespace std;



int main(){
	while(true){
		cout<<"user name : ";
		string s;
		getline(cin,s);
		cout<<"password : ";
		string s1;
		getline(cin,s1);
		cout<<"saved sucessfully!"<<endl;
		cout<<" lets login "<<endl;
		do {
			string s2;
			cout<<"enter user name : ";
			getline(cin,s2);
			string s3;
			cout<<"enter password : ";
			getline(cin,s3);
		while(s2!=s||s3!=s1){
			cout<<"try again";
			
			
			
			continue  ; }
		cout<<"---------------great------------------- "<<endl;	
			
		
		
		
	}
	
	
	
	
	return 0;
	
	
	
}