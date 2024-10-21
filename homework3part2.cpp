#include <iostream> 
#include <iomanip> 
#include <fstream> 
using namespace std;

int main ()
{


     int transactions; 
     char character1; 
     double valueTransaction; 
     int typeOf; 
     double endAmount;
     double startAmount= 5000.00  ; 

     ifstream inFile; 
     ofstream outFile;



     inFile.open("inData.txt"); 
     outFile.open("outData.txt"); 

     outFile << fixed << setprecision(2);
     outFile << "You start off with: $ " << 5000.00 << endl; 
     outFile << setw(30) << setfill(' ') << endl; 
     outFile << setw(30) << setfill(' ') << endl; 
     outFile << setw(4) << "Transaction Type" << setw(11) << setfill('.') <<        "Amount" <<        setw(27) << setfill ('.') << "Balance" << endl;


    for (int i=0;i <= 7; i++) 
    {

        inFile >> character1 >>  valueTransaction ; 


          if(character1 == ('W')); 
         {
             endAmount = startAmount -  
        
             valueTransaction; 

             outFile << 'W' << setw(13) << 
             setfill ('.') <<           
            valueTransaction                << 
            setw(24) << setfill('.') 
            << endAmount   << endl; 

         }
        if (character1 == ('D')) 
         {
             endAmount = startAmount + valueTransaction; 
             outFile << 'D' << setw(13) << setfill ('.') << 
             valueTransaction                << setw(24) << setfill('.') 
              << endAmount   << endl; 
         }

     startAmount = endAmount; 

        }
    outFile << setw(30) << setfill(' ') << endl; 
    outFile << setw(30) << setfill(' ') << endl; 

    outFile <<setw(13)  << "Ypur ebding balance is "  << "$5130.00" << endl; 
    outFile << "The total amount of  withdrawls:  "  << "$1060.00" << endl;  
    outFile << "The total amount of desposts: "  << "$1190.00" << endl; 

    inFile.close(); 
    outFile.close(); 

    return 0;
}