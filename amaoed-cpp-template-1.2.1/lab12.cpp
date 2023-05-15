/****************************************************************
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

  // Takes a string reference as input
// Then updates the referenced variable which is the input
void printer(string &variable){
  variable = "This is it!";
}

// * the thing pointed to  & the address of
int main() {
  string variable;

  printer(variable);

  cout << variable << endl;




  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************

  _pause();
  return EXIT_SUCCESS;
}
