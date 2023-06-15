/*
    Mitchell Fontaine
    CS-210
    06/14/2023
    Corner Grocery

*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Item {
public:
    string name;
    int frequency;

    Item(string name, int frequency) : name(name), frequency(frequency) {}

    void print() {
        cout << name << " " << frequency << endl;
    }

private:
    // This variable is private and cannot be accessed from outside the class.
    int id;
};

int main() {
    // Create a map to store the words and their frequencies.
    map<string, int> frequencies;

    // Open the input file.
    ifstream input("CS210_Project_Three_Input_File.txt");

    // Read the words from the file and add them to the map.
    string word;
    while (getline(input, word)) {
        frequencies[word]++;
    }

    // Create a vector to store the items.
    vector<Item> items;

    // Add the items to the vector.
    for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
        items.push_back(Item(it->first, it->second));
    }

    // Print the menu options.
    cout << "Menu Options:" << endl;
    cout << "1. Find the frequency of a word." << endl;
    cout << "2. Print the list of frequencies." << endl;
    cout << "3. Print a histogram of frequencies." << endl;
    cout << "4. Exit." << endl;

    // Get the user's choice.
    int choice;
    cin >> choice;

    // Process the user's choice.
    switch (choice) {
    case 1: {
        // Prompt the user for a word.
        cout << "Enter a word: ";
        cin >> word;

        // Get the frequency of the word.
        int frequency;
        if (frequencies.count(word)) {
            frequency = frequencies[word];
        }
        else {
            frequency = 0;
        }

        // Print the frequency of the word.
        cout << "The frequency of the word \"" << word << "\" is " << frequency << endl;

        ofstream outfile("frequency.dat");
        ofstream output;
        output.open("frequency.dat");

        // Write the frequencies to the data file in write mode.
        for (auto it = items.begin(); it != items.end(); it++) {
            output << it->name << " " << it->frequency << endl;
        }

        break;
    }

    case 2: {
        // Print the list of frequencies.
        for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
            cout << it->first << " " << it->second << endl;
        }

        ofstream outfile("frequency.dat");
        ofstream output;
        output.open("frequency.dat");

        // Write the frequencies to the data file in write mode.
        for (auto it = items.begin(); it != items.end(); it++) {
            output << it->name << " " << it->frequency << endl;
        }

        break;
    }

    case 3: {
        // Print the histogram of frequencies.
        for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
            cout << it->first;
            for (int i = 0; i < it->second; i++) {
                cout << "*";
            }
            cout << endl;

            ofstream outfile("frequency.dat");
            ofstream output;
            output.open("frequency.dat");

            // Write the frequencies to the data file in write mode.
            for (auto it = items.begin(); it != items.end(); it++) {
                output << it->name << " " << it->frequency << endl;
            }
        }
        break;
    }

    case 4: {
        // Exit the program.
        // Create a data file called frequency.dat.
        ofstream outfile("frequency.dat");
        ofstream output;
        output.open("frequency.dat");

        // Write the frequencies to the data file in write mode.
        for (auto it = items.begin(); it != items.end(); it++) {
            output << it->name << " " << it->frequency << endl;
        }

        // Close the data file.
        output.close();
        return 0;
    }

    default: {
        cout << "Invalid choice." << endl;
        break;
    }
    }

    return 0;
}