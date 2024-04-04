#include "OfferedCourse.h"

void OfferedCourse::SetInstructorName(string name) {
    instructor = name;
}

void OfferedCourse::SetLocation(string place) {
    location = place;
}

void OfferedCourse::SetClassTime(string classTime) {
    time = classTime;
}

string OfferedCourse::GetInstructorName() {
    return instructor;
}

string OfferedCourse::GetLocation() {
    return location;
}

string OfferedCourse::GetClassTime() {
    return time;
}