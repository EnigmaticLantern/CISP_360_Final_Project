#include <iostream>
#include <string>
#include <iomanip>
#include <string>
using namespace std;


/* Should prompt the user if they want to put the money into savings, raises, or an HR pool table.*/
/* Made by Torin W.*/

double decide(string decisionOne, double *result) {
    if (decisionOne == "Savings" || decisionOne == "savings" || decisionOne == "S" || decisionOne == "s"){
        cout << "$" << *result << " is added to savings." << endl;
    }
    if (decisionOne == "Raises" || decisionOne == "raises" || decisionOne == "R" || decisionOne == "r"){
        cout << "$" << *result << " is added to employee raises." << endl;
    }
    if (decisionOne == "Pool Table" || decisionOne == "pool table" || decisionOne == "table" || decisionOne == "Table" || decisionOne == "t" || decisionOne == "T"){
        cout << "$" << *result << " is used for the pool table." << endl;
    }
    return *result;
}
