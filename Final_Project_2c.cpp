#include <iostream>
using namespace std;


/* Should prompt the user if they want to put the money into savings, raises, or an HR pool table.*/
/* Made by Torin W.*/

int main() {
    cout << "Would you like to put the money towards savings, raises for employees, or a pool table (at HR's request)?: ";
    cout << "Savings, Raises, or Pool Table?: ";
    string reply;
    cin >> reply;
    if (reply == "Savings" || reply == "savings" || reply == "S" || reply == "s"){

    }
    if (reply == "Raises" || reply == "raises" || reply == "R" || reply == "r"){
        
    }
    if (reply == "Pool Table" || reply == "pool table" || reply == "table" || reply == "Table"){
        
    }
    return 0;
}