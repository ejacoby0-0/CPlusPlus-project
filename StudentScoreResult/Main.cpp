#include <iostream>
using namespace std;

int main() {

	// Prompting the user to enter the score of each of the students
	int students[5]{ };
	int score[5]{ };
	cout << "Enter the scores for the 5 students: " << "\n";

	for (int i = 0; i < 5; i++) {
		cout << "Enter the scores for student " << i + 1 << ": ";

		cin >> score[i];

	}

	//Displaying the scores that have been entered
	cout << "\n" << "Scores entered: " << "\n";

	for (int i = 0; i < 5; i++) {

		cout << "Student " << i + 1 << ": " << score[i] << "\n";

	}

	//Calculating the average score
	double sum = 0;
	double average = 0;

	for (int i = 0; i < 5; i++) {
		sum = sum + score[i];
		average = sum / 5;
	}

	cout << "\n" << "Average score: " << average;

	//Calculating highest score
	for (int i = 0; i < 5; i++) {

		if (score[0] < score[i])
			score[0] = score[i];

	}

	cout << '\n' << "Highest score: " << score[0];

	//Calculating slowest score
	for (int i = 0; i < 5; i++) {

		if (score[0] > score[i])
			score[0] = score[i];

	}

	cout << '\n' << "Slowest score: " << score[0] << "\n";

	return 0;
}
