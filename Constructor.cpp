# include"Constructor.h"
# include<iostream>
using namespace std;

BaseClass::BaseClass(int x) {
	this->x=x;
	cout<< this->x<<endl;
}

DerivedClass::DerivedClass(int y){
	this->y = y;
	cout << this->y << endl;
}

int main(){
	DerivedClass dc(2);
	return 0;
}