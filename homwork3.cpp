#include<iostream>
#include <fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    inFile.open("transactions.txt"); //Step 2
    outFile.open("outdata.txt");
    
    int startAmount;
    char typeOf;
    double transactionsAmount = 0;
    int transMoney;
    /*string typeOf;*/


   

    inFile >> startAmount;
    outFile << " You have: " << startAmount << endl; // asking the user the start amount

   /*inFile >> typeOf;
    outFile << "This was a " << typeOf << endl;*/

    

  

    
 
    for (transactionsAmount = 0; transactionsAmount <=7; transactionsAmount++)
    {
      
        if ( typeOf == "W")
        {
            inFile >> transMoney; 
            outFile << "you now have " << (startAmount - transMoney) << endl;
        }

       else if ( typeOf == "D")
        {
            inFile >> transMoney;
            outFile << (startAmount + transMoney) << endl;
        }

        //cout << "theres" << (transactionsAmount - 1) << endl;



        return 0;

    }

}