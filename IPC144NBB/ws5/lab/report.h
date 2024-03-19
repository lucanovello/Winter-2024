#ifndef SENECA_REPORT_H
#define SENECA_REPORT_H

struct Item {
	float mark;  // to hold the mark of the student
	int stNo; // to hold the student number
	char name[31]; // to hold the student name up to 30 characters in a Cstring
};
void readStudentInfo(int stno[], float mark[], int num);
void printReport(const int stno[], const float mark[], int num);

#endif // !SENECA_REPORT_H
