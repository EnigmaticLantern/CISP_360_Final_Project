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
    double *result = new double;
    cin >> *result;
    employ(result);   
    cout << "There is $" << fixed << setprecision(2) << *result << " remaining." << endl;
    cout << "How much needs to be spent on maintenence, machine repairs, etc?: ";
    double amount_two;
    cin >> amount_two;
    double result_two;
    rev_val(result); 
    if (*result > 0.0) {
        cout << "There is $" << *result << " remaining." << endl;
        cout << "You have some left over, would you like to give raises, save it, use it for the pool table, or do something else with it (other)? (R, S, T, or O): ";
        string decisionOne;
        cin >> decisionOne;
        if (decisionOne == "R" || decisionOne == "r")
            decide(decisionOne, result);
        if (decisionOne == "S" || decisionOne == "s")
            decide(decisionOne, result);
        if (decisionOne == "T" || decisionOne == "t")
            decide(decisionOne, result);
        if (decisionOne == "O" || decisionOne == "o")
            cout << "Thank you for using our calculator." << endl << "Have a good day/night!";
    }
    if (*result < 0.0) {
        cout << "You don't have enought to deliver raises or put into savings" << endl;
        cout << "You are $" << *result << " in debt.";
    }
    return 0;
}
