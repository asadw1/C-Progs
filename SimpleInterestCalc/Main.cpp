/*
			Programmer: Asad Waheed
			Date: 05-03-2015
			Program: SimpleInterest.cpp
			Description: Simple interest calculator in 1 class

*/

#include <iostream>
#include <stdlib.h>

using namespace std; 

int main()
{
	cout << "======================================" << endl;
	cout << "Simple Interest Calculator Version 1.0";
	cout << "\n======================================" << endl;

	// Variables, formulas CI = P(1+R/100)T - P
	int principal;
	int rate;
	int time;
	
	
	cout << "Hello user." << endl;
	cout << "Enter principal:\t";
	cin >> principal;
	cout << "Enter rate:\t";
	cin >> rate;
	cout << "Enter time:\t";
	cin >> time;

	int simpleInterest = (principal * rate * time) / 100;
	cout << "\nYour compound interest is...\t$" << simpleInterest << endl;


}