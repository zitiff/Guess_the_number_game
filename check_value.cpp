#include <iostream>
#include "random_value.cpp"
#pragma once
using namespace std;

int check_value() {

	int target_value = random_value();
	int current_value = 0;
	bool not_win = true;
	int attempts = 1;

	cout << "Enter your guess:" << endl;

	for(attempts = 1; not_win==true; attempts++)
	{		
		cin >> current_value;

		if (current_value > target_value) 
			cout << "less than " << current_value << endl;
		
		else if (current_value < target_value && current_value!=0) 
			cout << "greater than " << current_value << endl;

		else if (current_value == target_value)
		{
			cout << "you win! attempts = " << attempts << endl << endl;
			not_win = false;
		}

		else if (!(cin >> current_value)) // если ошибка ввода		
			cout << "Invalid input. Please try again.\n";

		current_value = 0;
	} 


	return attempts;
}