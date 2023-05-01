#include <iostream>

#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int random_value(int max_value) {
	
	srand(time(nullptr)); // use current time as seed for random generator

	int value = rand() % max_value;

	return value;
}