#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double sum = 0.0;
	double percentage;
	int numClasses;
	cout << "Enter the number of classes the student is taking: ";
	cin >> numClasses;
	
	// Set number of elements in grades array equal to numClasses
	int grades[numClasses] = {};
	
	// Prompt user to enter grade for each class and store each grade into the grades array
	for(int i = 0; i < numClasses; i++) {
		cout << "Enter the student's grade for class " << i+1 << " (as a percentage): ";
		cin >> grades[i];
	}
	
	// Add up all the grades
	for(int i = 0; i < numClasses; i++) {
		sum += grades[i];
	}
	
	//Calculate the average percentage
	percentage = sum / numClasses;
	
	cout << setprecision(2) << fixed;
	cout << "\n";
	cout << "The student's average grade is: " << percentage << "%." << endl;
	
	if(percentage >= 90) {
		cout << "The student has a 4.0 GPA!" << endl;
	} else if((percentage >= 80) && (percentage < 90)) {
		cout << "The student has a 3.0 GPA." << endl;
	} else if((percentage >= 70) && (percentage < 80)) {
		cout << "The student has a 2.0 GPA." << endl;
	} else if((percentage >= 60) && (percentage < 70)) {
		cout << "The student has a 1.0 GPA." << endl;
	} else {
		cout << "The student has a 0.0 GPA." << endl;
	}
}
