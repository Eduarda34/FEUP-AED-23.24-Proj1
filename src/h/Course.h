#ifndef PROJETO_1_COURSE_H
#define PROJETO_1_COURSE_H
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Course {
private:
    string code;
    vector<string>classes;
    vector<int>students;
public:
    Course(string cod);
    void setCode(string cod);
    string getCode() const;
    void addClass(string& c);
    void removeClass(string& c);
    void addStudent(int student);
    void removeStudent(int student);
    vector<string> getClasses() const;
    vector<int> getStudents() const;
};


#endif
