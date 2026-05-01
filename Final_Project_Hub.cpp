#include <iostream>
#include <string>
#include <iomanip>
#include "FinalProjectPart2a.cpp" 
#include "FinalProject2b.cpp"
#include "Final_Project_2c.cpp"
using namespace std;
/* This file was made by Torin W. */


int main(){
    /* Prompts the user to input the initial amount */
    cout << "How much did you make in this past quarter?: ";
    int initial_amount;
    cin >> initial_amount;
    double result = initial_amount;
    employ(result);
    cout << "There is $" << fixed << setprecision(2) << result << " remaining." << endl;
    cout << "How much needs to be spent on maintenence/machine repairs/etc?: ";
    float amount_two;
    cin >> amount_two;
    float result_two;
    float leftOver;
    rev_val(result);
    cout << leftOver << endl;
    result = leftOver;
    if (result > 0)
        cout << "There is $" << result << " remaining." << endl;
        cout << "You have some left over, would you like to give raises, save it, or do something else with it (other)? (R, S, or O): ";
        string decision1;
        cin >> decision1;
        if (decision1 == "R" || decision1 == "r")
            int decide(result);
        if (decision1 == "S" || decision1 == "s")
            int decide(result);
        if (decision1 == "O" || decision1 == "o")
            cout << "Thank you for using our calculator." << endl << "Have a good day/night!";
    if (result < 0)
        cout << "You don't have enought to deliver raises or put into savings";
        cout << "You are $" << result << " in debt.";
    return 0;
}
