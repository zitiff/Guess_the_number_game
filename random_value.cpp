#include <iostream>

#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int random_value(int argc, char** argv) {
	int max_value = 10;
	if (argc >= 2) 
	{
		string arg1_value{ argv[1] };
		if (arg1_value == "-max") 
		{
			if (argc < 3) {
				std::cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
				return -1;
			}
			max_value = std::stoi(argv[2]);
		}
	}

	srand(time(nullptr)); // use current time as seed for random generator

	int value = rand() % max_value;

	return value;
}