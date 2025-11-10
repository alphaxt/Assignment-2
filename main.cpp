#include <iostream>
#include "Employee.h"
using namespace std;

void demonstrateShallowVsDeepCopy() {
    cout << "\n========== Shallow vs Deep Copy Demonstration ==========" << endl;

    Employee original("Muhammad danish", 0023, 75000);
    original.displayInfo();

    Employee deepCopy = original;
    cout << "\nAfter creating deep copy:" << endl;
    deepCopy.displayInfo();

    cout << "\nModifying original employee's salary..." << endl;
    original.updateSalary(80000);

    cout << "\nOriginal after modification:" << endl;
    original.displayInfo();

    cout << "Deep Copy (unchanged - has its own data):" << endl;
    deepCopy.displayInfo();

    cout << "Deep copy maintains separate data, showing proper encapsulation." << endl;
}

void passByValue(Employee emp) {
    cout << "\nInside passByValue function:" << endl;
    emp.displayInfo();
}

Employee returnObject() {
    Employee temp("Returned Employee", 999, 55000);
    cout << "\nCreating temporary object inside function..." << endl;
    return temp;
}

int main() {
    cout << "======== TechSolutions Employee Management System ========\n" << endl;

    cout << "1. Creating employees using constructor with initializer list:" << endl;
    Employee emp1("ali ahmed", 0011, 65000);
    Employee emp2("abdul ahmed", 0046, 72000);
    Employee emp3("ahsan ali", 0022, 58000);

    cout << "\n2. Displaying employee information (using const functions):" << endl;
    emp1.displayInfo();
    emp2.displayInfo();
    emp3.displayInfo();

    cout << "3. Using static function to show total employees:" << endl;
    cout << "Total Employees: " << Employee::getTotalEmployees() << endl;

    cout << "\n4. Dynamic object allocation using pointers:" << endl;
    Employee* empPtr = new Employee("Dynamic Employee", 104, 68000);
    empPtr->displayInfo();

    cout << "5. Passing object as function argument:" << endl;
    passByValue(emp1);

    cout << "\n6. Returning object from function:" << endl;
    Employee returnedEmp = returnObject();
    returnedEmp.displayInfo();

    cout << "7. Demonstrating 'this' pointer (comparing employees):" << endl;
    emp1.compareWith(emp2);

    cout << "\n8. Copy constructor demonstration:" << endl;
    Employee emp4 = emp1;
    emp4.displayInfo();

    demonstrateShallowVsDeepCopy();

    cout << "\n9. Cleaning up dynamic memory:" << endl;
    delete empPtr;

    cout << "\nFinal employee count: " << Employee::getTotalEmployees() << endl;

    cout << "\n========== Program Ending - Destructors will be called ==========" << endl;

    return 0;
}
