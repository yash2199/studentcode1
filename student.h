#include<iostream>
using namespace std;

class student{
private:
	int id ;
	string name;
	double price ;
public :
	student();
	student(int id , string name, double mark );
	
	void accept();
	
	void display();
	

};
