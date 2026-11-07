#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class ShoppingCart
{
private:
    string product;
    int quantity;
    double price, total, discount, finalAmount;

public:
    void getDetails()
    {
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, product);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void calculate()
    {
        total = price * quantity;

        if (total >= 5000)
            discount = total * 0.20;
        else if (total >= 3000)
            discount = total * 0.10;
        else
            discount = 0;

        finalAmount = total - discount;
    }

    void display()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== SHOPPING BILL =====\n";
        cout << "Product       : " << product << endl;
        cout << "Price         : Rs. " << price << endl;
        cout << "Quantity      : " << quantity << endl;
        cout << "Total         : Rs. " << total << endl;
        cout << "Discount      : Rs. " << discount << endl;
        cout << "Final Amount  : Rs. " << finalAmount << endl;
    }
};

int main()
{
    ShoppingCart s;

    s.getDetails();
    s.calculate();
    s.display();

    return 0;
}
