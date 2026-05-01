//Part 2a- Number of Employees
/* Made by Liam Y.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void employeeSalary(string employeeWork, string employeeName, float result)
{
    
    if (employeeWork == "Crewmember")
    {
        result -= 30000; // Example salary for a crewmember
        cout << employeeName << " is a " << employeeWork << " and is paid $30,000." << endl;
    }
    else if (employeeWork == "Manager")
    {
        result -= 60000; // Example salary for a manager
        cout << employeeName << " is a " << employeeWork << " and is paid $60,000." << endl;
    }
    else if (employeeWork == "CEO")
    {
        result -= 100000; // Example salary for a CEO
        cout << employeeName << " is a " << employeeWork << " and is paid $100,000." << endl;
    }
    else
    {
        cout << "Invalid employee type entered. Please enter Crewmember, Manager, or CEO." << endl;
        cin >> employeeWork; // Prompt the user to enter a valid employee type
        employeeSalary(employeeWork, employeeName, result); // Recursive call to handle the new input
    }
}

int employ(float result)
{
    // Show the current money balance
    cout << result << endl;

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
        employeeSalary(employeeWork, employeeName, result); // Call the function to calculate salary and update result
    }
    // Return the new balance after paying everyone
    return result;
}
