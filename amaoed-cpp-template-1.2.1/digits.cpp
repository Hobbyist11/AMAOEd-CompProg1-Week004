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
#include <cmath>

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int digits(int a) { return pow( ((1+sqrt(5)) /2), a)/sqrt(5) ;  }
int main() {
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************

  int a;
    std::cout << "Please enter the N of the fibonacci sequence: ";
    std::cin >> a;

  std::cout << "The result is: " << digits(a) << endl;

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  std::cout << endl;
  _pause();
  return EXIT_SUCCESS;
}
