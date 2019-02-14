#include <iostream>
using namespace std;

void getHeight(int h){
	cout << "Please enter your Height in inches: " ;
	cin >> h;
}

void getWeight(int w) {
	cout << "Please enter your Weight in pounds: " ;
	cin >> w;
}

void getAge(int age){
	cout << "Please enter your Age in years: " ;
	cin >> age;
}


int main(){
	getHeight();
	getWeight();
	getAge();
	
	
	
	return 0;
}