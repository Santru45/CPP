
#include<iostream>
#include<iomanip>
#include"kilometer_to_mile.h"			//This includes user defined header files
using namespace std;

void kilometer_to_mile::convert_to_mile()		//Defining functions 
{
	cout<<"Please enter the distance in Kilometers:\n";
	cin>>km;
	miles  = km * 0.621371; // Formula to convert Kilometers to Miles
    	cout<<fixed << setprecision(2)<< km << " kilometers = " << miles << " miles.\n\n";
} 
kilometer_to_mile::kilometer_to_mile()
{
	cout<<"The object is created"<<endl;
}
kilometer_to_mile::~kilometer_to_mile()   //This is a destructor, it will delete the object before the program ends and frees memory
{
	cout<<"The object is deleted"<<endl;
}



