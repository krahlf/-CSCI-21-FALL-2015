/*
 * Name        : lab_5.cpp
 * Author      : Katherine Rahlf/Luke Sathrum
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 * Sources     : cplusplus.com, Luke Sathrum's header file, github.com
 */

#include "lab_5.h"

// CODE HERE (FUNCTION DEFINITIONS)

int main() {
    
    return 0;
}

/*
 * Displays "Hello world!" to stdout (cout) (no newline character after)
 */
void Hello() {

    cout << "Hello world!";
    
    return;
}

/*
 * Displays the string parameter to stdout (no newline character)
 * @param const string& - The string to display to stdout
 */
void PrintMessage(string str_in) {

    cout << str_in;
    
    return;
}

/*
 * Returns the integer value 42.
 * @return int - The value 42
 */
int GetAnswer() {

    return 42;
}

/*
 * Returns the larger of the two parameter values. Should work correctly
 * if the values are equivalent (returns either one)
 * @param int - The first value
 * @param int - The second value
 * @return int - The larger of the two values, or either one if they are equal
 */
int FindLarger(int int_one, int int_two) {

    int larger;
    
    if (int_one > int_two) {
    
        larger = int_one;
    }
    
    else {
    
        larger = int_two;
    }
    
    return larger;
}

/*
 * Return the string "Message: STRING", where STRING is replaced by the value of
 * the first parameter (string). If second parameter (bool) is true, convert
 * first parameter (string) to all uppercase letters before concatenating it
 * with "Message: ". If first parameter is the empty string, return
 * "Message: empty".
 * @param string - A message.
 *               - Defaults to "" (empty string)
 * @param bool - To indicate if we should uppercase letters or not
 *             - Defaults to false
 */

string BuildMessage(string message, bool upper) {
    
    if (upper == true) {
    
        int how_long = message.length();
        
        for (int i = 0; i < how_long; i++) {
        
            message[i] = toupper(message[i]);
        }
    }
    
    message = "Message: " + message;
    
    return message;
}