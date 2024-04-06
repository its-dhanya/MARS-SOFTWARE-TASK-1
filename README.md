# MARS-SOFTWARE-TASK-1
LIGHT DOSE:
I installed linux in my PC. I went through the Basic commands, I kept this task for last, but didnt get time to learn it completely.

MEDIUM DOSE:
I went through the transition between C to C++. Though I didnt get much time to explore, I got a basic outline of C++ and OOPS. Referred a youtube crash course video for the same.

Qn 1. 
This is a simple C++ program that demonstrates the use of a custom data type created using a lambda function. The program adds two integers using the custom data type and prints the result to the console.
The auto customDataType = [](int x, int y) line defines a lambda function that takes two integers as parameters and returns their sum. The auto keyword is used to automatically deduce the return type of the lambda function.
The int result = customDataType(10, 20); line invokes the lambda function with arguments 10 and 20 and stores the result in the result variable.

Qn 2.
This C++ program demonstrates a simple communication system using classes and inheritance. The program defines three classes: Communicable, Member, Subteam, and Leader.

Class Communicable
The Communicable class is an abstract base class with two pure virtual functions: canCommunicateWith and sendMessage.
canCommunicateWith checks if the current object can communicate with another Communicable object.
sendMessage sends a message to another Communicable object.

Class Member
The Member class inherits from Communicable and represents a member with a name and power level.
It has a constructor that takes a name and power level.
It has getter functions getName and getPowerLevel to retrieve the member's name and power level.

Class Subteam
The Subteam class inherits from Member and represents a subteam that can contain other Communicable objects.
It has a vector to store members of the subteam.
It has functions to add a member to the subteam, set a leader for the subteam, and check if the subteam can communicate with another Communicable object.

Class Leader
The Leader class inherits from Member and represents a leader with the ability to communicate with any Communicable object.

Main Function:
The main function demonstrates the usage of the classes by creating instances of Leader, Subteam, and Member.
It adds members to subteams, sets leaders for subteams, and sends messages between members and subteams using the sendMessage function.


STRONG DOSE:
The first question, I felt it was logic based, I knew Python already, so went with it.
For the second question, I got a clear idea on Image processing libraries, how to import and use them.

Qn 1.
This Python program finds the first of four consecutive integers, each with four distinct prime factors.

Function prime_factors(n)
This function takes an integer n as input and returns a set of its prime factors.
It uses a while loop to divide n by 2 until it is no longer divisible by 2.
Then, it uses a for loop to check for prime factors starting from 3 up to the square root of n, in steps of 2.
If a prime factor is found, it is added to the set of factors and n is divided by the factor.
Finally, if n is greater than 2, it is added to the set of factors.
The function returns the set of prime factors.

Function consecutive_four_distinct_prime_factors()
This function finds the first of four consecutive integers, each with four distinct prime factors.
It uses a while loop to iterate over integers starting from 1.
For each integer, it checks if it has four distinct prime factors by calling the prime_factors function and checking the length of the set of prime factors.
If an integer has four distinct prime factors, the function increments a counter. Otherwise, it resets the counter to 0.
If the counter reaches 4, it returns the first number of the four consecutive integers.
The function continues to iterate until it finds the desired sequence.
Main Code
The main code calls the consecutive_four_distinct_prime_factors function to find the first of four consecutive integers with four distinct prime factors.
It then prints the result.

Qn 2.
This Python script demonstrates basic image processing using the Python Imaging Library (PIL), now known as Pillow. It opens an image file, processes it to identify pixels based on their RGB values, calculates brightness, and then displays the modified image.

Image Processing Steps
Import PIL Library: The script starts by importing the necessary module from PIL.

Open Image: It opens an image file named "image.jpg" using the Image.open() method.

Define Threshold: A threshold value (160, 160, 160) is defined to categorize pixels into two types (typeA and typeB) based on their RGB values.

Process Image Pixels:

It initializes counters count_typeA and count_typeB to count pixels of typeA and typeB.
It iterates over each pixel in the image and calculates its brightness using the formula (0.21 * r + 0.72 * g + 0.07 * b) / 3.
Based on the RGB values, it categorizes each pixel into typeA or typeB and updates the respective counters.
It also updates the pixel's color to either black or white based on its brightness value.
Calculate Percentages: It calculates the percentage of pixels for each type relative to the total number of pixels in the image.

Display Results: It prints the percentage of typeA and typeB pixels.

Show Image: Finally, it displays the modified image using the image.show() method.
