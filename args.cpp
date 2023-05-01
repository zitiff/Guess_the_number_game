using namespace std;

int argsChecking(int argc, char** argv, int& max_value)
{
	if (argc >= 2)
	{
		string arg1_value{ argv[1] };
		if (arg1_value == "-max")
		{
			if (argc < 3) {
				cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
				return -1;
			}
			max_value = stoi(argv[2]);
			return 0;
		}
		else if (arg1_value == "-table")
		{
			io("", 0);
			return -1;
		}
		else if (arg1_value == "-level")
		{
			if (argc < 3) {
				cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
				return -1;
			}
			int level = stoi(argv[2]);
			if (level == 1)
				max_value = 10;
			else if (level == 2)
				max_value = 50;
			else if (level == 3)
				max_value = 100;
			else
				cout << "Incorrect value of argument '-level'" << std::endl;
			
			return 0;
		}
	}
}
