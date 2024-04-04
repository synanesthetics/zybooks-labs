#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
    private:
        string courseNum;
        string courseTitle;

    public:
        void SetCourseNumber(string courseNumber);
        void SetCourseTitle(string courseName);

        string GetCourseNumber();
        string GetCourseTitle();

        void PrintInfo() const;
};

#endif
