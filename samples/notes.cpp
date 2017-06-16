#include <iostream>

using namespace std;

// function prototypes (these are so functions can be after main)
string askUserNote();
int askUserScale();
int findOffset(string * arr, int size, string target);

/*
* This program takes root note and scale type as user input and returns all
* notes in that scale
*/
int main() {
    string notes[12] = 
    {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    //0,    1    2    3     4    5    6     7    8     9    10    11
    
    // scale patterns (assume C scale)
    int major[7] = {0, 2, 4, 5, 7, 9, 11};
    int minor[7] = {0, 2, 3, 5, 7, 8, 10};

    // added all scale patters to array that holds arrays of type int
    int * scales[2] = {major, minor};
    string scaleNames[2] = {"Major", "Minor"};

    // placeholder for user input (we will add this function later)
    string userNote = askUserNote();
    int userScale = askUserScale();

    //                      arr | size | "C"
    int offset = findOffset(notes, 11, userNote);

    
    // prints notes in scale
    int noteIndex = 0;
    cout << "Notes in Scale " << userNote << " " 
         << scaleNames[userScale] << ":" << endl;
    for (int i=0; i<7; i++) {
        // deals with octaves
        noteIndex = scales[userScale][i] + offset;
        if (noteIndex >= 12) {
            noteIndex -= 12;
        }
        cout << notes[noteIndex] << ", ";
    }
    // formatting
    cout << endl;

    return 0;
}

/*
* Asks user for root note, check that is a valid choice and returns it
*/
string askUserNote() {
    string note = "";
    cout << "Enter a note: (ie C, C#, E, etc...)" << endl;
    cin >> note;
    cout << "----------------------------" << endl;
    return note;
}

/*
* Prints scale options and user selects one by entering the match number
*/
int askUserScale() {
    int userInput = 0;

    cout << "Select scale type by number: " << endl
    << "0: Major" << endl
    << "1: Minor" << endl;

    // saving user input via cin into varable userInput
    cin >> userInput;

    // TODO we should check here that the user entered a correct input

    cout << "----------------------------" << endl;

    return userInput;
}

/*
* Function returns the index of the target in arr.
* If target is not found returns -1 so so we can check in calling function.
* The target index happens to be the offset we need to shift to change roots.
*/
int findOffset(string * arr, int size, string target) {
    // we start with -1 because arrays have no negative indexes
    int targetIndex = -1;
    
    // searching array for target
    for (int i=0; i<size; i++) {
        if (arr[i] == target) {
            // target found
            targetIndex = i;
        }
    }
    
    return targetIndex;
}