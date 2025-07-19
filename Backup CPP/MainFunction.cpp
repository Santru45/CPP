/*****************************************************************************************************

Name                 : P Ankith Raj Jaiswal
Matriculation Number : 407516
Course 		     : C++
University	     : TUKL

******************************************************************************************************

This Program allows the user to convert the units of a quantity using mathematical calculations.
In this program you can convert the following two quantities:
1. Temperature : Fahrenheit to Celsius 
2. Temperature : Celsius to Fahrenheit
3. Distance    : Miles to Kilometeres
4. Distance    : Kilometeres to Miles
Formulae used for conversion are below
Fahrenheit = Celsius * 9/5 +32
Celsius = (Fahrenheit-32)*5/9
1 Mile = 1.609 Kilometre 

*******************************************************************************************************

This program uses class with constructors, destructors along with functions to execute the program.
You first select which conversion you want to do and then you have to give the input value, now, 
the program converts the value accordingly and shows you the answer in the units you desire.
It again asks you to if you want to continue and convert another unit and based on your answer, the program will proceed further.

*****************************************************************************************************/

#include<iostream>
#include<conio.h>
#include<cctype>
#include"celsius_to_fahrenheit.h"
#include"fahrenheit_to_celsius.h"
#include"mile_to_kilometer.h"
#include"kilometer_to_mile.h"
using namespace std;

int main()
{
	// Declaring the variables required for the program.
	char t,choice, again;		    	// Declaring variable for do...while loop

	
	cout<<"***************************************************\n";
    	cout<<"     Welcome to the unit conversion program\n";
    	cout<<"***************************************************\n\n";

	
	do		// do...while loop is for iteration, first loop is executed and then the condition is cheked for contiuation of loop
	{
		// Show the conversion options to the user
       		cout<<"Please choose a conversion option:\n";
       		cout<<"F: Celsius to Fahrenheit\n";
       		cout<<"C: Fahrenheit to Celsius\n";
       		cout<<"M: Kilometeres to Miles\n";
       		cout<<"K: Miles to Kilometers\n";
	
		cout<<"\nSelect option (F/C/M/K):\n";
       		cin>>choice;
       
       		choice = tolower(choice);
		
       		// Use a switch statement to perform the corresponding conversion
		switch(choice)
		{
		// Checking which value is entered and continues according to the value entered.
			case 'f' :
			{
				fahrenheit_to_celsius f2c;
				f2c.convert_to_celsius();
				break;
			}
			case 'c' :
			{
				
				celsius_to_fahrenheit c2f;
				c2f.convert_to_fahrenheit();
				break;
			}
			case 'm' :
			{
				mile_to_kilometer m2k;
				m2k.convert_to_kilometer();
				break;
			}
			case 'k' :
			{
				kilometer_to_mile k2m;
				k2m.convert_to_mile();
				break;
			}
			default :
			{
				cout<<"Invalid choice. Please choose an option betweeen (F/C/M/K)\n";
                     		break;
			}
	    }

	    cout<<"\nDo you want to perform the unit conversion again? (y/n) \n";
       	    cin>>again;
       	    cout<<endl;

	}while(again == 'y');
		
	cout<<"Thank you for using unit conversion program, Goodbye!";;
	
	return 0;
}

