/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 2 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

//function prototypes from Basic UI program week1
void DisplayApplicationInformation();
void DisplayDivider(string outputTitle);
void TerminateApplication();

int main()
{
DisplayApplicationInformation();

	Employee employee1; //instantiate employee1 object.
	
	DisplayDivider("Employee 1");

	//This section prompts for user input
	cout << "Please enter first name: ";
	string firstName;
	getline(cin, firstName);
	
	cout << "Please enter last name: ";
	string lastName;
	getline(cin, lastName);
	
	cout << "Please enter gender: ";
	string gender;
	getline(cin, gender);
	char firstCharacterGender = gender[0]; //takes value of gender, places in array, and assigns first charcter to char firstCharacterGender.

	cout << "Please enter dependents: ";
	string dependents;
	getline(cin, dependents);

	cout << "Please enter annual salary: ";
	string annualSalary;
	getline(cin, annualSalary);

	//This section sets and displays input values for employee1 object.
	employee1.setFirstName(firstName);
	employee1.setLastName(lastName);
	employee1.setGender(firstCharacterGender);
	employee1.setDependents(stoi(dependents)); //dependent string converted to int
	employee1.setAnnualSalary(stod(annualSalary)); //annualSalary string converted to double
	employee1.displayEmployee();

	//This section uses multi-arg constructor to set values for employee2 object.
	Employee employee2("Tow", "Mater", 'M', 1, 32000);
	DisplayDivider("Employee 2");
	employee2.displayEmployee();

	TerminateApplication();


return 0;
}

//functions defined from Basic UI week 1 lab.
void DisplayApplicationInformation()
{
	cout << "Welcome to the Employee Class Test Program." << endl;
	cout << "CIS247C, Week 2 Lab." << endl;
	cout << "Name: Steven Bennett" << endl;
	cout << "This program demonstrates instatiating two objects from no-arg and multi-arg constructors" << endl;
}

void DisplayDivider(string outputTitle)
{
	cout << '\n' << "****************** " + outputTitle + " *******************" << endl;
}

void TerminateApplication()
{
	cout <<'\n' << "Thank you for using the application!" << endl;
}