#pragma once

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;
    
    static const string companyName;
    static int employeeCount;

public:
    Employee(string n = "", int i = 0, double s = 0.0);
    
    Employee(const Employee& other);
    
    ~Employee();
    
    void displayInfo() const;
    
    static int getTotalEmployees();
    
    void updateSalary(double newSalary);
    
    Employee createCopy();
    
    void compareWith(Employee emp);
    
    string getName() const { return name; }
    int getID() const { return id; }
    double getSalary() const { return salary; }
};

