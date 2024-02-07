#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int color;
A:	cout<<"MENU"<<endl;
	cout<<"1. red"<<endl;
	cout<<"2. green"<<endl;
	
	cout<<" please choose a color, 1 or 2:"<<endl;
	cin>>color;
	
	
	if(color == 1){
		cout<<"this is a bad color."<<endl;
	
	}
	else if(color == 2){
		cout<<"this is a good color."<<endl;
		
	}
	else{
		cout<<"you entered a wrong option.PLEASE ENTER A CORRECT DIGIT."<<endl;
	
		
	}
		system("pause");
		system("cls");
	goto A;
	
	
	
	return 0;
	
	
}
