#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Variables
    double balance = 0.0; // Starting balance
    char transactionType; // Transaction type: W (withdrawal) or D (deposit)
    double amount = 0.0;  // Amount of each transaction

    // Open the input file
    ifstream infile("transactions.txt");

    // Check if file opened successfully
    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read the starting balance from the file
    infile >> balance;
    cout << "Starting Balance: $" << fixed << setprecision(2) << balance << endl;

    // Process each transaction (we assume 7 transactions based on Part I requirements)
    for (int i = 0; i < 7; i++) {
        infile >> transactionType >> amount;

        if (transactionType == 'W') {
            balance -= amount;
            cout << "Withdrawal: $" << amount << " | New Balance: $" << balance << endl;
        } else if (transactionType == 'D') {
            balance += amount;
            cout << "Deposit: $" << amount << " | New Balance: $" << balance << endl;
        } else {
            cout << "Unknown transaction type!" << endl;
        }
    }

    // Close the file
    infile.close();

    // Display the final balance at the end of the day
    cout << "Final Balance: $" << fixed << setprecision(2) << balance << endl;

   return 0; 
}