#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string user_name() {
	// Ask about name
	cout << "Hi! Enter your name, please:" << endl;
	string user_name;
	cin >> user_name;
	return user_name;
}

void table_writer(string user_name, int attempts_count) {

	const string high_scores_filename = "high_scores.txt";

	// Write new high score to the records table
	{
		// We should open the output file in the append mode - we don't want
		// to erase previous results.
		ofstream out_file{high_scores_filename, ios_base::app};
		if (!out_file.is_open()) {
			cout << "Failed to open file for write: " << high_scores_filename << "!" << endl;
			return;
		}

		// Append new results to the table:
		out_file << user_name << ' ';
		out_file << attempts_count;
		out_file << endl;
	} // end of score here just to mark end of the logic block of code

	// Read the high score file and print all results
	{
		ifstream in_file{high_scores_filename};
		if (!in_file.is_open()) {
			cout << "Failed to open file for read: " << high_scores_filename << "!" << endl;
			return;
		}

		cout << "High scores table:" << endl;

		string username;
		int high_score = 0;
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> high_score;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			cout << username << '\t' << high_score << endl;
		}
	}
}