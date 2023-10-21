#include <iostream>
#include "Student.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
 	Student *str = new Student(101, "Sumit", 88,77,92);
 	cout<<"Total marks : "<<str->calculateTotalMarks()<<endl;
	cout<<"Percentage : "<<str->calculatePercentage()<<endl;
	return 0;
}
