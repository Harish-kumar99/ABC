#include<iostream>
#include<fstream.h>

using namespace std;


//creating and writing
int main(){
	fstream f;
	f.open("harish_file.txt",ios::out);
	if(!f){
		cout<<"file doesnt exist";}
	else{
		cout<<"file is created";
		f<<"hey how are you!";
		
		
		
		}
	f.close();
			
	
	
	
	return 0;
	
	
	
}