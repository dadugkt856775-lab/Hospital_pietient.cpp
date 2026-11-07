#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Attendance
{
private:
    string name;
    int rollNo;
    int totalClasses;
    int attendedClasses;
    double percentage;

public:
    void getDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Total Classes: ";
        cin >> totalClasses;

        cout << "Enter Attended Classes: ";
        cin >> attendedClasses;
    }

    void calculate()
    {
        percentage = ((double)attendedClasses /
                      totalClasses) * 100;
    }

    void display()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== ATTENDANCE DETAILS =====\n";
        cout << "Roll Number       : " << rollNo << endl;
        cout << "Student Name      : " << name << endl;
        cout << "Total Classes     : " << totalClasses << endl;
        cout << "Attended Classes  : " << attendedClasses << endl;
        cout << "Attendance        : " << percentage << "%" << endl;

        if (percentage >= 75)
            cout << "Status            : Eligible" << endl;
        else
            cout << "Status            : Not Eligible" << endl;
    }
};

int main()
{
    Attendance a;

    a.getDetails();
    a.calculate();
    a.display();

    return 0;
}
