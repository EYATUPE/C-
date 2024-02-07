#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x ;
	int y ;
	cout<<"Please enter the first digit "<<endl;
	cin>>x;
	cout<<"Please enter the second digit "<<endl;
	cin>>y;
	cout<<"The sum of the two digits is "<< x + y <<endl;
	cout<<"The difference of the two digits is "<< x - y <<endl;
	cout<<"The division of the two digits is "<< x * pow(y,-1)<<endl;
	cout<<"The muplication of the two digits is "<< x * y <<endl;
	cout<<"The Percetage of the two digits is "<< x % y <<endl;
	
	
	return 0;
}
