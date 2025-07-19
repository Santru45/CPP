#include<iostream>
#include<iomanip>
#include"celsius_to_fahrenheit.h"						//This includes user defined headerfile
using namespace std;

void celsius_to_fahrenheit::convert_to_fahrenheit()     //Defining the functions
{
	cout<<"Please enter the temperature in Celsius:\n"<<endl;
	cin>>celsius;
	fahrenheit=celsius * (9.0/5.0) + 32;
	cout<<fixed << setprecision(2)<<celsius << " Celsius = " << fahrenheit << " degrees Fahrenheit.\n\n";
}
celsius_to_fahrenheit::celsius_to_fahrenheit()		
{
	cout<<"The object is created"<<endl;
}
celsius_to_fahrenheit::~celsius_to_fahrenheit()  //This is a destructor, it will delete the object before the program ends and frees memory
{
	cout<<"The object is deleted"<<endl;
}


