// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: [NAME HERE]

#include <iostream>
using namespace std;

/****************************************************************
 *  Function Name: getScore
 *  Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0–100)
 ****************************************************************/

// [TO DO: ADD getScore function HERE]
    // Ask the user for a score and validate input.
    // Keep asking until the score is between 0 and 100.
    // Return the valid score.
double getScore()// fucntion for the score 
{
    double textscore; // text integer 
    textscore = -1; // so one of the of statments are true 

    while (textscore < 0 || textscore >100 ) // repeats till user inputs a value number 
    {
        cout << "please enter a valid"; // displays this 
        cin >> textscore; // user input 
    }
    return(textscore); // outputs value to main function 

}




/****************************************************************
 * Function Name: displayLetterGrade
 * Purpose: Determine and display the letter grade 
 *          corresponding to the numeric score.
 * Parameters: score (double) – the numeric test score
 * Return Value: None (displays the letter grade to the screen)
 ****************************************************************/

// [TO DO : ADD getScore function HERE]
    // Determine the letter grade and display it.
    // Example grading scale:
    // 90–100: A
    // 80–89:  B
    // 70–79:  C
    // 60–69:  D
    // Below 60: F
void displayLetterGrade(double textscore) { // function statement having a parameter textscore which checks the text score 
    if (textscore >= 90) { // all the if and else statements check the value of the text score the users enter and then one by one check which grade you got and then it will output the grade the correct letter grade. 
        cout << "A";// output

    }
    else if (textscore >= 80) {
        cout << "B";//ouput 
    }
    else if (textscore >= 70) {
        cout << "C";//output 
    }
    else if (textscore >= 60) {
        cout << "D"; //output
    }
    else {
        cout<<"F"; //output 
    }
}


// You should not need to edit main for your program to run 
// correctly. Only edit it to add cout statements or comment
// out code to test your functions.
int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three times to get and validate each test score
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

    cout << "Exam 2: ";
    displayLetterGrade(score2);

    cout << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}


