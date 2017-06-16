#include <iostream>

using namespace std;

// function prototypes
int findOffset(string * arr, int size, string target);


/*
* This program takes root note and scale type as user input and returns all
* notes in that scale
*/
int main() {
    string notes[12] = 
    {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    //0,    1    2    3     4    5    6     7    8     9    10    11

    // placeholder for user input (we will add this function later)
    string userNote = "C";
    int userScale = 1;
    
    // scale patterns (assume C scale)
    int major[7] = {0, 2, 4, 5, 7, 9, 11};
    int minor[7] = {0, 2, 3, 5, 7, 8, 10};

    // added all scale patters to array that holds arrays of type int
    int * scales[2] = {major, minor};

    //                      arr | size | "C"
    int offset = findOffset(notes, 7, userNote);

    // prints notes in scale
    for (int i=0; i<7; i++) {
        cout << notes[scales[userScale][i] + offset] << ", ";
    }

    cout << endl;

    return 0;
}

/*
* Function returns the index of the target in arr.
* If target is not found returns -1 so so we can check in calling function.
* The target index happens to be the offset we need to shift to change roots.
*/
int findOffset(string * arr, int size, string target) {
    // we start with -1 because arrays have no negitive indexs
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