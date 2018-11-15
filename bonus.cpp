#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 	
 	 double dataColumn1 = 0.0;
 	 double dataColumn2 = 0.0;
 	 double dataColumn3 = 0.0;
 		double average = 0.0;
		char character;

 		int lineCount = 1;
		int numofColumns = 3;

 		char searchCase = 'G';
 		int casesFound = 0;
 		double total = 0.0;
		double lineAvg = 0.0;

   	ifstream dataIn;
   	dataIn.open("bonus", ios::in);


		if (dataIn){

 while(!dataIn.eof()){

		dataIn >> character;

if(character == searchCase){
	
   dataIn >> dataColumn1 >> dataColumn2 >> dataColumn3;
   
	
   average = (dataColumn1 + dataColumn2 + dataColumn3) / numofColumns;

   total = total + dataColumn1 + dataColumn2 + dataColumn3;

   casesFound++;
   
//FIX: line Count 
   cout << "The average for line #" << lineCount <<" is: " << average << "\t(" << dataColumn1 << " + " << dataColumn2 << " + " << dataColumn3 << ")" << endl << endl;
	
	}

	lineCount++;
	
}
	lineAvg = total / (casesFound * numofColumns);

	cout << "The average for all lines which start with 'G' is:\t" << lineAvg << endl;

	}
	
	dataIn.close();

   return 0;

}
