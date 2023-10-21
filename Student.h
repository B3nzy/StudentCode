#include <bits/stdc++.h>
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
class Student
{
	int id;
	string name;
	double marks1, marks2, marks3;
	public:
		Student();
		Student(int, string, double, double, double);
		int getId();
		string getName();
		double getMarks1();
		double getMarks2();
		double getMarks3();
		void setId(int);
		void setName(string);
		void setMarks1(double);
		void setMarks2(double);
		void setMarks3(double);
		double calculateTotalMarks();
		double calculatePercentage();
	protected:
};

#endif
