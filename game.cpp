#include <iostream>
#include "random_value.cpp"
#include "check_value.cpp"
#include "high_scores.cpp"

#pragma once
using namespace std;

int main(int argc, char** argv) {
	int target_value = random_value(argc, argv);
	string name = user_name();
	int attempts = check_value(target_value);
	io(name, attempts);
	return 0;
}