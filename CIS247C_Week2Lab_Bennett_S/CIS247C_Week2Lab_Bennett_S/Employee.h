/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 2 Lab
  Program Description: This lab creates a program that instantiates
  2 employee objects from the Employee class.*/

using namespace std;
#ifndef EMPLOYEE_H //inclusion guard
#define EMPLOYEE_H

class Employee
{
private: //private attributes
	string firstName;
	string lastName;
	char gender;
	int dependents;
	double annualSalary;

public: //member functions
	Employee(); //default constructor
	Employee(string first, string last, char gen, int dep, double salary); //constructor with parameters
	double calculatePay();
	void displayEmployee();
	string getFirstName();
	void setFirstName(string first);
	string getLastName();
	void setLastName(string last);
	char getGender();
	void setGender(char gen);
	int getDependents();
	void setDependents(int dep);
	double getAnnualSalary();
	void setAnnualSalary(double salary);
};

#endif