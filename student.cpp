#include<iostream>
#include "student.h"
using namespace std;


	student::student()
	{
		
		id=10;
		name="yash";
		mark =50;
		}	
	student::student(int id , string name, double mark)
	{
		this->id=id;
		this->name=name;
		this->marks=marks;
	}
	void student::accept()
	{
		cout<<"enter name ";
		cin>>name;
		cout<<"id";
		cin>>id;
		cout<<"marks";
		cin>>mark;
	}
	void student:: display()
	{
		cout<<name;
		cout<<id;
		cout<<marks;
	}

