
#include<iostream>
#include<iomanip>
#include"mile_to_kilometer.h"            //This includes user defined header file
using namespace std;

void mile_to_kilometer::convert_to_kilometer()     //Defining functions
{
	cout<<"Please enter the distance in Miles:\n";
	cin>>miles;
    	km  = miles / 0.621371; // Formula to convert Miles to Kilometers
    	cout<<fixed << setprecision(2)<< miles << " miles = " << km << " kilometers.\n\n";
}

mile_to_kilometer::	mile_to_kilometer()
{
	cout<<"The object is created"<<endl;
}
mile_to_kilometer::~mile_to_kilometer()   //This is a destructor, it will delete the object before the program ends and frees memory
{
	cout<<"The object is deleted"<<endl;
}


