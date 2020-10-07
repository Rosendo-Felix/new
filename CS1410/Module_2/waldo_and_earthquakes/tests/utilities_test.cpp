#include "utilities.h"
#include "cout_redirect.h"  // To test cout <<
// this tells catch to provide a main()
// only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

TEST_CASE("Replace a single &apos; in a story")
{
  // Arrange
  string story = "The park&apos;s waterfall is long.";
  string story_fixed = "The park's waterfall is long.";
  // Act
  story = FixStory(story);

  // Assert
  REQUIRE(story == story_fixed);
}

TEST_CASE("Replace multiple occurrences of &apos; in a story")
{
  // Arrange
  string story = "The park&apos;s waterfall is long. Let&apos;s go for a slide."
                 " There&apos;s a long line. We&apos;ll have to hurry.";
  string story_fixed = "The park's waterfall is long. Let's go for a slide."
                       " There's a long line. We'll have to hurry.";
  // Act
  story = FixStory(story);

  // Assert
  REQUIRE(story == story_fixed);
}

TEST_CASE("Insert red before one occurrence of striped in a story")
{
  // Arrange
  string story = "The striped shirt is old.";
  string story_fixed = "The red striped shirt is old.";
  // Act
  story = FixStory(story);

  // Assert
  REQUIRE(story == story_fixed);
}

TEST_CASE("Insert red before multiple occurrence of striped in a story")
{
  // Arrange
  string story = "The striped shirt is old. We will make a new striped"
                 " shirt. It will be a great striped shirt. Everyone will"
                 " love the new striped shirt";
  string story_fixed = "The red striped shirt is old. We will make a new red striped"
                       " shirt. It will be a great red striped shirt. Everyone will"
                       " love the new red striped shirt";
  // Act
  story = FixStory(story);

  // Assert
  REQUIRE(story == story_fixed);
}

TEST_CASE("Replace &apos; and insert red in a story")
{
  // Arrange
  string story = "It&apos;s an old striped shirt. We&apos;ll make a new "
                 "striped shirt. It&apos;ll be a great striped shirt. "
                 "Everyone&apos;s happy with the new striped shirt";
  string story_fixed = "It's an old red striped shirt. We'll make a new "
                       "red striped shirt. It'll be a great red striped shirt. "
                       "Everyone's happy with the new red striped shirt";
  // Act
  story = FixStory(story);

  // Assert
  REQUIRE(story == story_fixed);
}

TEST_CASE("Write a formatted line for a report, short location")
{
    // Arrange
    CoutRedirect buffer;  // open buffer to capture output
//    ofstream outfile?
    // Act
    WriteReportLine(4.6, "md", "38km WNW of Talcahuano, Chile",
        45.3498, -34.23,
        12.567, "2016-11-08T07:08:03.000Z", cout);
    std::string s_out = buffer.getString();  // get capture output to string
    std::string test_string = "4.6 md  38km WNW of Talcahuano, Chile              45.3498    -34.2300    12.6  "
                              "2016-11-08T07:08:03.000Z\n";

    // Assert
    REQUIRE(s_out == test_string);
}

TEST_CASE("Write a formatted line for a report, long location")
{
  // Arrange
  CoutRedirect buffer;  // open buffer to capture output
//    ofstream outfile?
  // Act
  WriteReportLine(5.0, "md", "East of the North Island of New Zealand Out West",
                  -35.6968, -178.955,
                  10, "2016-11-03T18:45:38.620Z", cout);
  std::string s_out = buffer.getString();  // get capture output to string
  std::string test_string = "5.0 md  East of the North Island of New Zea...    -35.6968   -178.9550    10.0  2016-11-03T18:45:38.620Z\n";

  // Assert
  REQUIRE(s_out == test_string);
}

