/*Read  chapter 3 Gaddis

Homework assignment 

Write a math calculator program. Using the algorithm to calculate a random number found on page 130 of your textbook, calculate a random number between 1 and 300.  Calculate a second random number between  1 and the first random number.  Display the values as:

   xxx
-  yyy
------
wait until the  user enters an answer. Display the correct answer after the user enters their answer. 

format your output nicely so that everything lines up properly. Comment your code.  Plan your program with pseudocode.  Post your .cpp and your pseudocode in Digication. Publish, then post the link here.

*/

#include <iostream>
#include <iomanip> // for width 
#include <cstdlib> // for rand & srand function
using namespace std;

int main () {

const int minValue = 1; 
int maxValue = 300;
int answer;
int goodAnswer;

unsigned seed = time (0);

srand(seed);


int randNum1 = ( rand () % (maxValue - minValue + 1)) + minValue; // found first random number
cout << setw(6) << randNum1 << endl;
int randNum2 = ( rand () % (randNum1 - minValue + 1)) + minValue; // found second random number


cout<< "-" << setw(5) << randNum2 << endl;
cout << "------" << endl;
cout << "Please enter the answer to the problem" << endl;
cin >> answer;
cout << "Your answer is " << answer << endl;
goodAnswer = randNum1 - randNum2;
cout << "The right answer is " << goodAnswer << endl;



}


