#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    /* TODO: Declare any necessary variables here. */
    string tsvFilename;
    ifstream tsvFile;
    ofstream report;

    string lastName;
    string firstName;
    int midterm1;
    int midterm2;
    int final;

    int totalRows = 0;
    int midterm1total = 0;
    int midterm2total = 0;
    int finaltotal = 0;

    /* TODO: Read a file name from the user and read the tsv file here. */
    cin >> tsvFilename;
    tsvFile.open(tsvFilename);

    if (!tsvFile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    tsvFile >> lastName >> firstName >> midterm1 >> midterm2 >> final;

    report.open("report.txt");

    while(!tsvFile.eof()) {

        char letterGrade;

        double average = (static_cast<double>(midterm1) + midterm2 + final) / 3;

        if (average < 60) {
            letterGrade = 'F';
        } 
        else if (average < 70) {
            letterGrade = 'D';
        }
        else if (average < 80) {
            letterGrade = 'C';
        }
        else if (average < 90) {
            letterGrade = 'B';
        }
        else {
            letterGrade = 'A';
        }

        midterm1total += midterm1;
        midterm2total += midterm2;
        finaltotal += final;

        totalRows++;

        report << lastName << "\t" << firstName << "\t" << midterm1 << "\t" << midterm2 << "\t" << final << "\t" << letterGrade << endl; 

        tsvFile >> lastName >> firstName >> midterm1 >> midterm2 >> final;

    }

    double midterm1avg = static_cast<double>(midterm1total) / totalRows;
    double midterm2avg = static_cast<double>(midterm2total) / totalRows;
    double finalavg = static_cast<double>(finaltotal) / totalRows;

    report << setprecision(4) << showpoint << endl << "Averages: midterm1 " << midterm1avg << ", midterm2 " << midterm2avg << ", final " << finalavg << endl;

    return 0;
}
