#include <iostream>
#include <fstream>
#include "utilities.h"
#include <iomanip>

using namespace std;

int main()
{

    ifstream in("../../story.txt");
    if(in.fail())
    {
        cout << "Unable to open file...\n";
        return 1;
    }

    std::string story;
    getline(in, story);

    in.close();

    string NewStory = FixStory(story);

    ofstream OutFile("../../updated_story.txt");

    if(OutFile.fail())
    {
        cout << "Unable to open update_story.txt\n";
        return 1;
    }

    OutFile << NewStory;

    //out print file to console (not needed since a new file is created)
//    cout << NewStory << endl;

    OutFile.close();

    


  return 0;
}
