#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream dataOut;
   dataOut.open("abc.txt", ios::out);
if (dataOut) {
   dataOut << a << " " << b << " " << c;
   dataOut.close();
cout << "Content Written to file 'abc.txt'" << endl;
   cout << a << " " << b << " " << c;//display data to console (i.e. as formatted chars)

cout << endl << endl;
}
else
{
cout << "ERROR: \twritting, to file abc.txt" << endl;
}
 
   return 0;
}
