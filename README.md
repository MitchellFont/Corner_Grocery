# Corner_Grocery
# Mitchell Fontaine
# 06/15/2023

Scenario
You are doing a fantastic job at Chada Tech in your new role as a junior developer, and you exceeded expectations in your last assignment for Airgead Banking. Since your team is impressed with your work, they have given you another, more complex assignment. Your task is to build an item-tracking program for the Corner Grocer, which should incorporate all of their requested functionality.

The Corner Grocer needs a program that analyzes the text records they generate throughout the day. These records list items purchased in chronological order from the time the store opens to the time it closes. They are interested in rearranging their produce section and need to know how often items are purchased so they can create the most effective layout for their customers. 

Directions
As you work, check your code’s syntax to ensure that your code will run. Note that when you compile your code, you will be able to tell if this is successful overall because it will produce an error message for any issues regarding syntax. Some common syntax errors are missing a semicolon, calling a function that does not exist, not closing an open bracket, or using double quotes and not closing them in a string, among others.

The program that the Corner Grocer is asking you to create should address the following functional requirements: 

Menu Option One:
Prompt a user to input the item, or word, they wish to look for. 
Return a numeric value for the frequency of the specific word.

Menu Option Two:
Print the list with numbers that represent the frequency of all items purchased.
The screen output should include every item (represented by a word) paired with the number of times that item appears in the input file, CS210_Project_Three_Input_File.txt. For example, the file might read as follows:
         Potatoes 4
         Pumpkins 5
         Onions 3
         
Menu Option Three:
Print the same frequency information for all the items in the form of a histogram. 
Then print the name, followed by asterisks or another special character to represent the numeric amount.
The number of asterisks should equal the frequency read from the CS210_Project_Three_Input_File.txt file. For example, if the file includes 4 potatoes, 5 pumpkins, and 3 onions, then your text-based histogram may appear as represented below. However, you can alter the appearance or color of the histogram in any way you choose:
        Potatoes ****
        Pumpkins *****
        Onions ***

Menu Option Four:
Exit the program.

Data File Creation:
Create a data file, with the naming convention frequency.dat, for backing up your accumulated data. The frequency.dat file should include every item (represented by a word) paired with the number of times that item appears in the input file.

This output file is created in the beginning of the program without user intervention and is for backup purposes. 
-------------------------------------------------------------------------------
Summarize the project and what problem it was solving:
         This project was to build an item tracking program that analyzes the text records Corner Grocery generates throughout the day and records the amounts each item is purchased so they can create the most effective layout for their customers.
         
What did you do particularly well:
         I did a good job in creating a map of the items and storing them through the use of vectors so we could iterate through them and count how many of each item there was.
         
Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?:
         I could enhance my code by using less 'ofstream' in each case and instead cut it down to only using it once to store a backup. I could also make better use of the private function and variables by possibly have the backup stored in there.
         
Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?:
         I found it most challenging to write the frequencies to the backup. I had issues with it sometimes storing them and other times not, so I placed the 'ofstream' to write them in each case. I spent a lot of time in the C++ documentation to write the 'for loop' for the 'ofstram' to store the frequencies and i will be keeping that documentation close to hand in the future while writing programs.
         
What skills from this project will be particularly transferable to other projects or course work?:
         Mapping and vectors will be very useful in my future projects and course work.
         
How did you make this program maintainable, readable, and adaptable?:
         I made this program maintainable and readable by using cases for each of the menu options. I find it much easier to read this way. As far as adaptability goes, I believe this program has the ability to be used by multiple industries by changing what the input file is and what exactly needs to be stored or counted.

