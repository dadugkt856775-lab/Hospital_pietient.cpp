#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class VehicleRental
{
private:
    string vehicle;
    int days;
    double dailyRate;
    double total, discount, finalAmount;

public:
    void getDetails()
    {
        cout << "Enter Vehicle Name: ";
        cin.ignore();
        getline(cin, vehicle);

        cout << "Enter Daily Rental Rate: ";
        cin >> dailyRate;

        cout << "Enter Number of Days: ";
        cin >> days;
    }

    void calculate()
    {
        total = dailyRate * days;

        if (days >= 7)
            discount = total * 0.15;
        else if (days >= 3)
            discount = total * 0.10;
        else
            discount = 0;

        finalAmount = total - discount;
    }

    void display()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== VEHICLE RENTAL BILL =====\n";
        cout << "Vehicle        : " << vehicle << endl;
        cout << "Daily Rate     : Rs. " << dailyRate << endl;
        cout << "Rental Days    : " << days << endl;
        cout << "Total Amount   : Rs. " << total << endl;
        cout << "Discount       : Rs. " << discount << endl;
        cout << "Final Amount   : Rs. " << finalAmount << endl;
    }
};

int main()
{
    VehicleRental v;

    v.getDetails();
    v.calculate();
    v.display();

    return 0;
}
