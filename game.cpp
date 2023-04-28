#include <iostream>

#include "check_value.cpp"
#include "high_scores.cpp"

#pragma once
using namespace std;

int main() {
	string name = user_name();
	int attempts = check_value();
	io(name, attempts);
	return 0;
}