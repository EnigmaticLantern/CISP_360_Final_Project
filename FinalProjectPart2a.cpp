//Part 2a- Number of Employees
/* Made by Liam Y.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float employeeSalary(string employeeWork, string employeeName, double &result)
{
    int costs = 0;
    
    if (employeeWork == "Crewmember")
    {
        cout << employeeName << " is a " << employeeWork << " and is paid $30,000." << endl;
        result = result - 30000; // Example salary for a crewmember
    }
    else if (employeeWork == "Manager")
    {
        cout << employeeName << " is a " << employeeWork << " and is paid $60,000." << endl;
        result = result - 60000; // Example salary for a manager
    }
    else if (employeeWork == "CEO")
    {
        cout << employeeName << " is a " << employeeWork << " and is paid $100,000." << endl;
        result = result - 100000; // Example salary for a CEO
    }
    else
    {
        cout << "Invalid employee type entered. Please enter Crewmember, Manager, or CEO." << endl;
        cin >> employeeWork; // Prompt the user to enter a valid employee type
        employeeSalary(employeeWork, employeeName, result); // Recursive call to handle the new input
    }
    return result;
}

int employ(double *result)
{
    // Show the current money balance
    cout << "There is $" << fixed << setprecision(2) << *result << " remaining." << endl;

    int numEmployees;
    cout << "How many employees do you have?" << endl;
    cin >> numEmployees;

    // Loop to ask for each employee's information
    for (int i = 1; i <= numEmployees; i++)
    {
        string employeeName;
        string employeeWork;
        cout << "Please enter the name of employee #" << i << ": ";
        cin >> employeeName;
        cout << "Crewmember, Manager, or CEO?" << endl;
        cout << "What type of work does " << employeeName << " do?" << endl;
        cin >> employeeWork;
        employeeSalary(employeeWork, employeeName, *result); // Call the function to calculate salary and update result
        cout << "Current balance: $" << *result << endl;
    }
    // Return the new balance after paying everyone
    return *result;
}
