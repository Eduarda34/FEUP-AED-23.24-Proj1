#include <iostream>
#include "Student.h"

Student::Student(int number, string name) {
    this->name = name;
    this->number = number;
}

int Student::getNumber() const {
    return this->number;
}

string Student::getName() const {
    return this->name;
}

void Student::addClass(const string& c1) {
    this->classes.insert(c1);
}

void Student::removeClass(string c1) {

}