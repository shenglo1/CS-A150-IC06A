// CS 150 - C++ Programming I
// Processing a star map

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// We'll fill this in later
// Contains file format for stars.txt
#include "stars.h"

int main()
{
    // Open the star catalog
    ifstream in("stars.txt");

    // If you can't open, then print an error message and exit
    if (in.fail())
    {
        cerr << "Cannot open stars.txt" << endl;
        return -1;
    }
    // Read the file and
    string name;
    double x, y, z;
    int harvard, draper;
    double magnitude;
    while (in >> x >> y >> z >> draper >> magnitude >> harvard)
    {
        getline(in, name);
        
    //  -- Print only the named stars
    //  -- name, (x, y), magnitude
        if (name.length() > 0)
        {
            cout << name << ", (" << x << ", " << y << "), " << magnitude << endl;
        }            
    }


    // Done, just return
}
