# include"Constructor.h"
# include<iostream>
using namespace std;

BaseClass::BaseClass(int x) {
	this->x=x;
	cout<< "this is base: " << this->x << endl;
}

DerivedClass::DerivedClass(int y) : BaseClass(y){
	this->y = y;
	cout << "this is derived "<< this->y << endl;
}

int main(){
	DerivedClass* dc = new DerivedClass(2);
	return 0;
}