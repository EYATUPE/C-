#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
usind std::endl;

fload add(float HEIGHT, float WEIGHT){
	return HEIGHT + WEIGHT
}
void data_entry(int &AGE, float &HEIGHT, float &WEIGHT, string &NAME){
	cout<<"Please enter your Name: "<<endl;
	cin>>NAME;
	
	cout<<"Please enter your Age: "<<endl;
	cin>>AGE;
	
	cout<<"Please enter your Height: "<<endl;
	cin>>HEIGHT;
	
	cout<<"Please enter your Weight: "<<endl;
	cin>>WEIGHT;
	
	}
	void sentence(int AGE, float HEIGHT, float WEIGHT, string NAME){
		cout<<NAME<<"is"<<AGE<<"years old with a weight of"<<WEIGHT<<"Kgs and a Height of"<<HEIGHT<<"M respectively"<<endl;
	}
	int main(){
		//Now write the code here
		//Start by Declaring the variables to be used
		string name;//Name of the Respondent
		int age;//Age of the Respondent
		float height;//Heigh of the Respondent
		float Weight;//Weight of the Respondent
		
		//formulate the quests and promp the user to input values which shall be entered in the Declared variables
		/ata_entry(age, height, weight, name);
		cout<<"the sum of the weight & height is"<<add(height, weight)<<endl;/
		sentence(age, height, weight, name);
	}
