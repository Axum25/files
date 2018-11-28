#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream dataOut; //N.B.: 'dataOut' is a class
   dataOut.open("abc.bin", ios::out | ios::binary);
if (dataOut) {
   dataOut.write (reinterpret_cast<char *> (&a),sizeof(a));
   dataOut.write (reinterpret_cast<char *> (&b),sizeof(b));
   dataOut.write (reinterpret_cast<char *> (&c),sizeof(c));
   //dataOut << endl << a << " " << b << " " << c;
   dataOut.close();
}
else
{
cout << "ERROR: \twritting, to file 'abc.bin'" << endl;
}

cout << endl << endl << "\tFinished."<< endl << endl;
 
   return 0;
}
