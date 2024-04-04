#include "Course.h"

void Course::SetCourseNumber(string courseNumber) {
    courseNum = courseNumber;
}

void Course::SetCourseTitle(string courseName) {
    courseTitle = courseName;
}

string Course::GetCourseNumber() {
    return courseNum;
}

string Course::GetCourseTitle() {
    return courseTitle;
}

void Course::PrintInfo() const {
    cout << "Course Information:" << endl;
    cout << "   Course Number: " << courseNum << endl;
    cout << "   Course Title: " << courseTitle << endl;
}