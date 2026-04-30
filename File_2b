/*This program will use the revenue value provided to calulate the different costs and total amount 
needed to spend on things like maintenance, production, advertising, as well as the fixed costs and 
other things for a company and how much is left over*/
/* Made by Brydan W. */

#include <iostream>
#include <iomanip>
using namespace std;

int rev_val(float result)
{
    double totalSpent = 0, leftOver, revenue;
    
    // Percentages for ads, production, etc.
    const double maintenance_rate = 0.02, resources_rate = 0.26, 
                 production_rate = 0.13, advertising_rate = 0.07;
    
    double variable_cost;
    
    // Fixed costs like rent and bills
    const double fixed_Cost = 12147; 
    
    
    // Get the money made this quarter
    cout << "Enter the total revenue for this quarter: " << endl;
    cin >> revenue;
    
    // Calculate costs based on the revenue
    variable_cost = revenue*(maintenance_rate + resources_rate + production_rate + advertising_rate);
    
    // Add all costs together
    totalSpent = variable_cost + fixed_Cost;
    
    // Calculate money remaining
    leftOver = revenue - totalSpent;

    cout << fixed << setprecision(2);
    
    // Show the final numbers
    cout << "------------------\n";
    cout << "\nRevenue Needed: $" << totalSpent << endl;
    cout << "Amount Left Over: $" << leftOver << endl;
    
    // Pass the remaining money to the next part of the code
    return leftOver;
}
