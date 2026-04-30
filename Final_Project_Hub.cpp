#include <iostream>
/* #include "file_2a" */
/* #include "file_2b" */
/* #include "file_2c" */
using namespace std;
/* Made by Torin W. */


int main(){
    /* Prompts the user to input the initial amount */
    cout << "How much did you make in this past quarter?: ";
    int initial_amount;
    cin >> initial_amount;
    float result = 0;
    /*int file_2a(initial_amount, result)*/
    cout << "There is $" << result << " remaining." << endl;

    cout << "How much needs to be spent on maintenence/machine repairs/etc?: ";
    float amount_two;
    cin >> amount_two;
    float result_two = 0;
    /* file_2B(amount_two, result)*/
    if (result > 0)
        cout << "There is $" << result << " remaining." << endl;
        cout << "You have some left over, would you like to give raises, save it, or do something else with it (other)? (R, S, or O): ";
        string decision1;
        cin >> decision1;
        if (decision1 == "R" || decision1 == "r")
            /* file_2c(result, result_two);*/
        if (decision1 == "S" || decision1 == "s")
            /*file_2c(result, result_two);*/
        if (decision1 == "O" || decision1 == "o")
            cout << "Thank you for using our calculator." << endl << "Have a good day/night!";
    if (result < 0)
        cout << "You don't have enought to deliver raises or put into savings";
        cout << "You are $" << result_two << "in debt.";
    return 0;
}
