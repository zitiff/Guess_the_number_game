#include <iostream>
#include "random_value.cpp"
#include "check_value.cpp"
#include "high_scores.cpp"
#include "args.cpp"

using namespace std;

int main(int argc, char** argv) {

	int max_value = 10;

	int arg = argsChecking(argc, argv, max_value);
	if (arg == -1)
	{
		return 0;
	}

	string name = user_name();
	int target_value = random_value(max_value);
	int attempts = check_value(target_value);
	io(name, attempts);
	return 0;
}
