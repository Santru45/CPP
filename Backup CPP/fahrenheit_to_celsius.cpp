#include<iostream>
#include<iomanip> 
#include"fahrenheit_to_celsius.h"      //This includes user defined headerfiles
using namespace std;

void fahrenheit_to_celsius::convert_to_celsius()    //Defining functions
{
	cout<<"Please enter the temperature in Fahrenheit:\n";
	cin>>fahrenheit;
	celsius = 5.0/9.0 * (fahrenheit-32);// Formula to convert Fahrenheit to Celsius
	cout<<fahrenheit<<" Fahrenheit = "<<celsius<<" Celsius"<<endl;
}
fahrenheit_to_celsius::fahrenheit_to_celsius()
{
	cout<<"The object is created"<<endl;
}
fahrenheit_to_celsius::~fahrenheit_to_celsius()   //This is a destructor, it will delete the object before the program ends and frees memory
{
	cout<<"The object is deleted"<<endl;
}


