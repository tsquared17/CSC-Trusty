//==========================================================
//
// Title:      <application>
// Course:     CSC 1101
// Lab Number: <number>
// Author:     <name>
// Date:       <date>
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <ctime>
#include <cwchar>
using namespace std; // So "std::cout" may be abbreviated to "cout"

enum gearSelector{P, R, N, D};



string fullName(string firstName, string lastName, string middleName = "Q")
{
	return firstName + ' ' + middleName + ' ' + lastName;
}



int main()
{
	string x = "Bitch";
	string y = "Thot";
	string z = "Hoe";
	cout << fullName(x, z, y); //first, last, middle

  // Pause before application window closes
  cout << "\nPress any key to exit ..." << endl;
  _getch();

}
