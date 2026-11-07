#include <iostream>
#include <iomanip>
using namespace std;

class ElectricityBill
{
private:
    int units;
    double bill;

public:
    void getUnits()
    {
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill()
    {
        if (units <= 100)
            bill = units * 1.50;
        else if (units <= 200)
            bill = 100 * 1.50 + (units - 100) * 2.50;
        else if (units <= 300)
            bill = 100 * 1.50 + 100 * 2.50 +
                   (units - 200) * 4.00;
        else
            bill = 100 * 1.50 + 100 * 2.50 +
                   100 * 4.00 + (units - 300) * 5.00;
    }

    void display()
    {
        cout << fixed << setprecision(2);
        cout << "\n===== ELECTRICITY BILL =====\n";
        cout << "Units Consumed : " << units << endl;
        cout << "Total Bill     : Rs. " << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.getUnits();
    e.calculateBill();
    e.display();

    return
