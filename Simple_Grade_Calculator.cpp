// Program by: Harsh Gosar

//includes and  namespace
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Input Variables
	int testScore1, // Variable to store the first test score
		testScore2, // Variable to store the second test score
		testScore3; // Variable to store the third test score

	// Calculation Variables
	int keptScore1, // Variable to store the higher of the first two tests which will be used to calculate the final score
		keptScore2, // Variable to store the third test score which will be used to calculate the final score
		droppedTest, // Variable to store the number of the lower of the first two tests that is dropped
		totalScore; // Variable to store the total of the two tests that are used to calculate the final grade

	char letterGrade; // Character variable to store the letter grade of the total Score

	cout << "Enter the score for test #1: ";
	cin >> testScore1; // Scan in the first test score

	cout << "Enter the score for test #2: ";
	cin >> testScore2; // Scan in the second test score

	cout << "Enter the score for test #3: ";
	cin >> testScore3; // Scan in the third test score

	// Using if statement to decide which test score between 1 & 2 to keep and which to drop
	if (testScore1 >= testScore2)
	{
		keptScore1 = testScore1;
		droppedTest = 2;
	}
	else
	{
		keptScore1 = testScore2;
		droppedTest = 1;
	}

	keptScore2 = testScore3; // Test 3 is always used to calculate the final test score

	totalScore = keptScore1 + keptScore2; // Computing the total score of the two test scores that are kept

	// Calculating the Letter Grade based on the total score
	if(totalScore >= 92)
	{
		letterGrade = 'A';
	}
	else if(totalScore >= 82 && totalScore < 92)
	{
		letterGrade = 'B';
	}
	else if(totalScore >= 72 && totalScore < 82)
	{
		letterGrade = 'C';
	}
	else
	{
		letterGrade = 'F';
	}


	// Printing out all three scores
	cout << "First Test:  " << setw(2) << testScore1 << endl;
	cout << "Second Test: " << setw(2) << testScore2 << endl;
	cout << "Third Test:  " << setw(2) << testScore3 << endl;

	// Printing out the total Score and which test score was dropped
	cout << "After dropping test #" << droppedTest << ", the points earned are " << totalScore <<"." << endl;

	// Printing out the letter grade that the user received
	cout << "The letter grade is " << letterGrade << "." << endl;

	return 0;
}
