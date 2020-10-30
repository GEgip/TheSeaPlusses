#include <iostream>
#include "Examen.h"

using namespace std;

int main() {
	Examen obj;
	MyString question1;
	MyString question2;
	int choice;
	int day;
	int month;
	int year;
	int hour;
	int minute;
	int seconds;


	do {
		cout << "Welcome " << endl;
		cout << "Do you wish to make an exam?" << endl;
		cout << "1) Yes " << endl;
		//cout << "2) To edit an exam " << endl;
		cout << "2) QUIT " << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter the date the exam will be on: " << endl;
			cout << "Day: ";
			cin >> day;
			obj.setDay(day);
			cout << "Month (in number):";
			cin >> month;
			obj.setMonth(month);
			cout << "Year:";
			cin >> year;
			obj.setYear(year);

			cout << "Please enter the time the exam wil be at:" << endl;
			cout << "Hour:";
			cin >> hour;
			obj.setHour(hour);
			cout << "Minute:";
			cin >> minute;
			obj.setMinutes(minute);
			cout << "Seconds:";
			cin >> seconds;
			obj.setSeconds(seconds);
			cin.ignore();
			cout << "Enter the first question on the exam:" << endl;
			cin >> question1;
			obj.setPregunta(question1, 1);

			cout << "Enter the second question on the exam:" << endl;
			cin >> question2;
			obj.setPregunta(question2, 2);


			cout << "The exam will show up like this:\n\n" << endl;
			obj.displayExam();
			obj.save();

			break;

			//case 2:
				//cout << "Opening File:" << endl;
				//obj.open();
				//break;


		case 2:
			cout << "Please come back again " << endl;
			break;
		}

	} while (choice != 2);


	return 0;
}

