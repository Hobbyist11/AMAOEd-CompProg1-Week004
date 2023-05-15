/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include "_pause.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
  float var[20];  // Uninit float
  float* ptr = var;  // pointer to array
  float(&var_ref) [20] = var;  // reference to arary

cout << "The value of the variable is          : " << var << endl;
cout << "The logical address of the variable is: " << (void*)&var_ref << endl;
cout << "The value of the reference is         : " << var_ref[0] << endl;
cout << "" << endl;

// cout << "Value of uninitialized array: " << var << endl;
// cout << "Logical address of array: " << static_cast<void*>(var) << endl;
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************

  _pause();
  return EXIT_SUCCESS;
}
