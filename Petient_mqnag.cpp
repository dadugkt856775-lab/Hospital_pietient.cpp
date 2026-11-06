#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Patient
{
private:
    int patientId;
    string name;
    int age;
    string disease;
    double roomCharge;
    double doctorFee;
    double medicineCost;
    double testCost;
    double totalBill;

public:
    void getDetails()
    {
        cout << "Enter Patient ID: ";
        cin >> patientId;

        cin.ignore();

        cout << "Enter Patient Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cin.ignore();

        cout << "Enter Disease: ";
        getline(cin, disease);

        cout << "Enter Room Charges: ";
        cin >> roomCharge;

        cout << "Enter Doctor Fee: ";
        cin >> doctorFee;

        cout << "Enter Medicine Cost: ";
        cin >> medicineCost;

        cout << "Enter Test Cost: ";
        cin >> testCost;
    }

    void calculateBill()
    {
        totalBill = roomCharge + doctorFee +
                    medicineCost + testCost;
    }

    void displayDetails()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== PATIENT BILL =====\n";
        cout << "Patient ID       : " << patientId << endl;
        cout << "Patient Name     : " << name << endl;
        cout << "Age              : " << age << endl;
        cout << "Disease          : " << disease << endl;
        cout << "Room Charges     : Rs. " << roomCharge << endl;
        cout << "Doctor Fee       : Rs. " << doctorFee << endl;
        cout << "Medicine Cost    : Rs. " << medicineCost << endl;
        cout << "Test Cost        : Rs. " << testCost << endl;
        cout << "-----------------------------\n";
        cout << "Total Bill       : Rs. " << totalBill << endl;
    }
};

int main()
{
    Patient p;

    p.getDetails();
    p.calculateBill();
    p.displayDetails();

    return 0;
}
