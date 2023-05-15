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
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************

  // Set variables
  string morning  = "Good morning";
  string afternoon  = "Good afternoon";
  int time;

  cout << "What time is it?";
  cin >> time;

    if (time < 12) {
        cout << morning;
    } else {
        cout << afternoon;
    }
    cout << endl;


  _pause();
  return EXIT_SUCCESS;
}
