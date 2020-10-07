#include "utilities.h"
#include <array>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

std::string FixStory(std::string story)
{

    //replace
    for(int i = 0; i < 15; i++) {
        story.replace(story.find("&apos;"), 6, "'");
    }

    size_t index = story.find("striped");

    while(index != std::string::npos)
    {
        story.insert(index, "red ");

        index = story.find("striped", index + 11);
    }

    return story;
}

void WriteReportLine(float magnitude, std::string type, std::string location,
                     float latitude, float longitude, float depth, std::string time,
                     std::ostream& out)
{

}

