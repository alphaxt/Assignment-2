#include "Employee.h"
#include <iostream>
using namespace std;

const string Employee::companyName = "TechSolutions";
int Employee::employeeCount = 0;

Employee::Employee(string n, int i, double s)
// initialize members using initializer list
    : name(n), id(i), salary(s) {
    employeeCount++;
    cout << "Constructor called for Employee: " << this->name << endl;
}

Employee::Employee(const Employee& other)
// initialize members using initializer list for deep copy
    : name(other.name), id(other.id), salary(other.salary) {
    employeeCount++;
    cout << "Copy constructor called (Deep Copy) for: " << this->name << endl;
}

Employee::~Employee() {
    employeeCount--;
    cout << "Destructor called for: " << name << endl;
}

void Employee::displayInfo() const {
    cout << "\n--- Employee Information ---" << endl;
    cout << "Company: " << companyName << endl;
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
    cout << "Salary: $" << this->salary << endl;
    cout << "----------------------------\n" << endl;
}

int Employee::getTotalEmployees() {
    return employeeCount;
}

void Employee::updateSalary(double newSalary) {
    this->salary = newSalary;
    cout << "Salary updated for " << this->name << endl;
}

Employee Employee::createCopy() {
    Employee copy = *this;
    return copy;
}

void Employee::compareWith(Employee emp) {
    cout << "\nComparing " << this->name << " with " << emp.name << endl;
    if (this->salary > emp.salary) {
        cout << this->name << " has higher salary." << endl;
    }
    else if (this->salary < emp.salary) {
        cout << emp.name << " has higher salary." << endl;
    }
    else {
        cout << "Both have same salary." << endl;
    }
}
