# TRY-IT-OUT: WALDO AND EARTHQUAKES

In this exercise, we will be doing two unrelated tasks.
The first task will be to fix a story. The second task will be
to read data and produce a report.



## Purpose

This activity will give us a chance to practice our string
manipulation skills and our file I/O skills including
formatting output.

## Skills and Knowledge

This activity will help you practice the following skills that essential to know for basic programming in `C++`:

- Writing and using functions 
- Using the C++ basic string class
- Using methods of the C++ basic string class
- Working with the ifstream class
- Working with the ofstream class
- Formatting output


This project will also help you to become familiar with the following important content knowledge in CS:

- Working in your development environment.
- Creating and using libraries
- Use basic unit testing to validate your code: `catch2`.

### Files to work on

All the functions you write, will be part of the `stock` library. The library consists of these two files:

- `src/utilities.cpp`
- `src/utilities.h`
- Your "driver" or application will be in `src/main.cpp`.

Please **DO NOT MODIFY** any other files. Modifying other files will probably break your project.

 ---
 ---
## Updating a Story
 ---
 ---
There is a story about Waldo in the file `story.txt`. It was downloaded from
https://www.wattpad.com/story/122468234-where%27s-waldo-short-stories. This is
a story that could go with a Where's Waldo book. We are going to make
a couple changes to the story.

## Part 1: Read a Story

First, read the story - well not really you, have the program read the story.
 Create an ifstream object and use that
object to open the `story.txt' file. If the file does not open, display a 
message and shut the program down.
This file is in the project directory.
If you are using CLion, when you use this file you will need 
to prepend ../../ to the filename.

Read the story into a single string object.

## Part 2: Update the Story

There are two changes we are going to make to the story. To do this, we 
are going to write a function.

Write a function named `FixStory` that receives a string and returns an updated string. 
This function is to update the string in two ways.

1. Replace each occurrence of `&apos;` with the `'` character. The `&apos;`
is the HTML special character code for `'`. Using `&apos;` worked well when
the story was on a web page. Now that it is in a text file, it doesn't make
sense.
2. Insert `red` before each occurrence of `striped shirt`. 

Once the string has been updated, return it.

Add the function prototype in the `utilities.h` file.
 
    std::string FixStory(std::string story);
 
 Write the function definition in the `utilities.cpp` file.
 
 ## Part 3: Write the Story
 
 In main, call the FixStory function. Then write the updated story to
 a file named `updated_story.txt`.
 This file is to be in the project directory.
 If you are using CLion, when you use this file you will need 
 to prepend ../../ to the filename.
 
 ---
 ---
 ## Writing a Report
 ---
 ---
 
 
 There is earthquake data in the file `earthquakes.txt`. This file contains data
 about earthquakes that are 4.5 or greater on the Richter scale over a 30-day 
 period in 2016.

 We are going to read this data and create a formatted report.
 
 ## Part 4: Write a Line
 
Write a function named `WriteReportLine`. This function received the 
following values.

- magnitude, a float 
- magnitude type, a string 
- location, a string 
- latitude, a float 
- longitude, a float
- depth, a float
- time, a string
- out, an ostream object passed by reference

This function is to write one line to the ostream object. This
line is to contain the data sent to the function.
The format of the output is very specific. Use `setw` and other formatting 
functions to make sure everything
prints as expected on the line. Each line is to contain the following.

- magnitude 
    - lines up on the right
    - uses 3 spaces
    - has 1 digit after the decimal place
- one blank space
- magnitude type
    - lines up on the left
    - uses 4 spaces
- location 
    - lines up on the left
    - uses 38 spaces
    - when a location is longer than 38 characters, print the first 35 
    characters of the location followed by three dots (...).
- latitude 
    - lines up on the right
    - uses 12 spaces
    - has 4 digits after the decimal place
- longitude
    - lines up on the right
    - uses 12 spaces
    - has 4 digits after the decimal place
- depth
    - lines up on the right
    - uses 8 spaces
    - has 1 digit after the decimal place
- two blank spaces
- the time
- a carriage return (\n or endl) 

Example 1

    5.7 mb  24km E of Tinogasta, Argentina            -28.1017    -67.3245   121.1  2016-11-13T01:01:51.930Z


Example 2

    4.6 mwr 40km NW of San Antonio de los Cobre...    -23.9891    -66.6231   208.0  2016-11-07T15:24:07.480Z

Add the function prototype in the `utilities.h` file.
 
    void WriteReportLine(float magnitude, std::string type, std::string location,
        float latitude, float longitude,
        float depth, std::string time, std::ostream& out);
 
 Write the function definition in the `utilities.cpp` file.
 
## Part 5: Reading and Writing the Data 

Read the data from the input file and print out the formatted 
report to the output file. This will happen from `main.cpp`.

The input and output files are to be in the main directory of the project.
If you are using CLion, when you use these files you will need to 
prepend `../../` to both the input
filename and the output filename. If you are using another development 
environment it may require a different prefix.

### Part 5.1: Read data from the input file

Read the data from the input file named `earthquakes.txt`. 

Each group of earthquake data
takes up four lines lines.

 - The first line contains 
    - magnitude
    - magnitude type 
 - The second line contains
    - location (has spaces)
 - The third line contains
    - latitude
    - longitude
    - depth
 - The fourth line contains
    - time 
 
 Notice how the location is the only value with spaces.
  Using >> to read all the other values is simpler and less prone to errors.
  
 You can read the data and store it in arrays if you like. Or you can read in 
  a line, process the data and print it out. I found it easier to read and
  print without storing the data in an array.
  
  
 
 
 There are two input files included in the starter code.
 
    earthquakes.txt
    earthquakes_short.txt
    
The `earthquakes_short.txt` only has a few groups of data. You may find it 
helpful to use this smaller file while coding. The `earthquakes.txt` is the 
one that the program is
to use when it is submitted.

### Part 5.2: Write the report to the output file


Write the formatted data for the earthquakes report to a file named
`earthquake_report.txt`. The first line of the report is to be the headings.
Use the following words for the headings and have them line up over the
formatted data. Notice there is no label for the magnitude type. 
The magnitude and type are both under the Magnitude label.

Magnitude Location Latitude Longitude Depth Time

Following the headings, list each group of data
on a single line with spacing and alignment as 
indicated in Part 4.


## Validate your code

Once you are satisfied with your work, run the unit test file:

From the dropdown select main_test and run.

Sample output:

&#x2713; Tests passed: 7 of 7 tests

---

## Submit your code

Zip your src folder and submit in Canvas.

---