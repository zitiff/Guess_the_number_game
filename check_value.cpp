#include <iostream>
#include "random_value.cpp"
#pragma once
using namespace std;

int check_value() {

	int target_value = random_value();
	int current_value = 0;
	bool not_win = true;
	int attempts = 0;

	cout << "Enter your guess:" << endl;

	do {
		cin >> current_value;
		attempts++;

		if (current_value > target_value) {
			cout << "less than " << current_value << endl;
		}
		else if (current_value < target_value) {
			cout << "greater than " << current_value << endl;
		}
		else {
			cout << "you win! attempts = " << attempts << endl << endl;
			break;
		}

	} while(true);

	return attempts;
}