#include<iostream>
#include<fstream.h>

using namespace std;


//reading
int main(){
	fstream f;
	char c;
	f.open("harish_file.txt",ios::in);
	if(!f){
		cout<<"file doesnt exist";}
	else{
		cout<<"file is created"<<endl;
		
		while(!f.eof()){
			f>>c;
			
			cout<<c;}
		
		
		
		}
	f.close();
			
	
	
	
	return 0;
	
	
	
}