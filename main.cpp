// Dennis Orf 10/20 Code to calculate highest paid manager and average pay
#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

using namespace std;

class Manager : public Employee {
public:
    Manager(string theName, double theWage, double theHours, double theBonus);
    double calcPay() const;

private:
    double bonus;
};

Manager::Manager(string theName, double theWage, double theHours, double theBonus)
    : Employee(theName, theWage, theHours), bonus(theBonus) {}

double Manager::calcPay() const {
    
    return Employee::calcPay() + bonus;
}


int main() {
    const int MAX_MANAGERS = 100;

    Manager* managers[MAX_MANAGERS];

    int numManagers;
    cout << "Enter number of managers: ";
    cin >> numManagers;

    for (int i = 0; i < numManagers; i++) {
        string name;
        double wage, hoursWorked, bonus;

        cout << "Enter manager " << i << " name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter manager " << i << " hourly wage: ";
        cin >> wage;

        cout << "Enter manager " << i << " hours worked: ";
        cin >> hoursWorked;

        cout << "Enter manager " << i << " bonus: ";
        cin >> bonus;

        managers[i] = new Manager(name, wage, hoursWorked, bonus);
    }

    double highestPay = 0.0;
    double totalPay = 0.0;
    string highestPaidManagerName;

    for (int i = 0; i < numManagers; i++) {
        double pay = managers[i]->calcPay();
        totalPay += pay;
        if (pay > highestPay) {
            highestPay = pay;
            highestPaidManagerName = managers[i]->getName();
        }
    }

    cout << "Highest paid manager is " << highestPaidManagerName << " who is paid $"
        << fixed << setprecision(2) << highestPay << endl;

    double averagePay = totalPay / numManagers;
    cout << "Average pay is $" << fixed << setprecision(2) << averagePay << endl;

    for (int i = 0; i < numManagers; i++) {
        delete managers[i];
    }

    return 0;
}
