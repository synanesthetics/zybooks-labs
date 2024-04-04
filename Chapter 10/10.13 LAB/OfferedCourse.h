#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
    private:
        string instructor;
        string location;
        string time;

    public:
        void SetInstructorName(string name);
        void SetLocation(string place);
        void SetClassTime(string classTime);

        string GetInstructorName();
        string GetLocation();
        string GetClassTime();
};

#endif