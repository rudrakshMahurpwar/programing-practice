#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
using namespace std;

template <class S = string, class D = double>
class Student
{
        S name;
        D marks;

        public:
        Student () {}
        ~Student() = default;
        Student (S name, D marks) :
                name(name), marks(marks) {}

        void setDetails()
        {
                cout << "Enter Student Name: ";
                cin >> name;
                cout << "Enter Student Marks: ";
                cin >> marks;
        }

        S getName()
        {
                return name;
        }

        D getMarks()
        {
                return marks;
        }
};

int main()
{
        Student<string,double> Stu[3];

        ofstream ofile("students.txt");
        if (!ofile){
                cerr << "Error: Unable to open file!" << endl;
                return 1;
        }

        for (int i = 0; i < 3; i++)
        {
                cout << endl << "Enter Details of Student "
                        << i+1 << ": " << endl;
                Stu[i].setDetails();
        }

        for (int i = 0; i < 3; i++)
        {
                ofile << "Student " << i+1 << ": " << endl;
                ofile << "Name: " << Stu[i].getName() << endl;
                ofile << "Marks: " << Stu[i].getMarks() << endl;
        }

        ofile.close();

        cout << endl << "Reading Student Details" << endl;
        ifstream ifile("students.txt");
        if (!ifile){
                cerr << "Error: Unable to open file!" << endl;
                return 1;
        }
        string line;
        while (getline(ifile, line))
        {
                cout << line << endl;
        }
        cout << endl;

        ifile.close();
        return 0;
}
