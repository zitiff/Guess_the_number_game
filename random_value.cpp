#include <iostream>

#include <cstdlib>
#include <ctime>

using namespace std;

int random_value() {

	const int max_value = 10;

	srand(time(nullptr)); // use current time as seed for random generator

	int value = rand() % max_value;

	return value;
}