#include "Student.h"

using namespace std;
Student::Student()
{
}

Student::Student(int id, string name, double marks1, double marks2, double marks3){
	this->id=id;
	this->name=name;
	this->marks1=marks1;
	this->marks2=marks2;
	this->marks3=marks3;
}
int Student::getId(){
	return id;
}
string Student::getName(){
	return name;
}
double Student::getMarks1(){
	return marks1;
}
double Student::getMarks2(){
	return marks2;
}
double Student::getMarks3(){
	return marks3;
}
void Student::setId(int id){
	this->id=id;
}
void Student::setName(string name){
	this->name=name;
}
void Student:: setMarks1(double marks1){
	this->marks1=marks1;
}
void Student::setMarks2(double marks2){
	this->marks1=marks2;
}
void Student::setMarks3(double marks3){
	this->marks1=marks3;
}
double Student::calculateTotalMarks(){
	return marks1+marks2+marks3;
}
double Student::calculatePercentage(){
	return calculateTotalMarks()/3;
}
