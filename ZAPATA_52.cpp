// Assignment 5.2 Reading Characters
// Write a program that asks the user to enter a single word and 
//outputs the series of ICAO words that would be used to spell it out.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string word, phonetic;
    char words[80], letter;

    cout << "Enter a word: ";
    cin.getline(words, 80);
    cout << "Phonetic version is: " << phonetic << endl;

    for (int index = 0; index < strlen(words); index++)
    {
        //cout << words[index];
        letter = words[index];
        letter = toupper(words[index]);
        cout << letter;

        switch(letter)
        {
            case 'A': cout << "lpha ";
                break;
            case 'B': cout << "ravo ";
                break;
            case 'C': cout << "harlie ";
                break;
            case 'D': cout << "elta ";
                break;
            case 'E': cout << "cho ";
                break;
            case 'F': cout << "oxtrot ";
                break;
            case 'G': cout << "olf ";
                break;
            case 'H': cout << "otel ";
                break;
            case 'I': cout << "ndia ";
                break;
            case 'J': cout << "uliet ";
                break;
            case 'K': cout << "ilo ";
                break;
            case 'L': cout << "ima ";
                break;
            case 'M': cout << "ike ";
                break;
            case 'N': cout << "ovember ";
                break;
            case 'O': cout << "scar ";
                break;
            case 'P': cout << "apa ";
                break;
            case 'Q': cout << "uebec ";
                break;
            case 'R': cout << "omeo ";
                break;
            case 'S': cout << "ierra ";
                break;
            case 'T': cout << "ango ";
                break;
            case 'U': cout << "niform ";
                break;
            case 'V': cout << "ictor ";
                break;
            case 'W': cout << "hiskey ";
                break;
            case 'X': cout << "-Ray ";
                break;
            case 'Y': cout << "ankee ";
                break;
            case 'Z': cout << "ulu ";
                break;
            default: cout << "none ";
        }
    }

    cout << endl;

    return 0;
}


/*
Enter a word: program
Phonetic version is:
Papa Romeo Oscar Golf Romeo Alpha Mike

Process returned 0 (0x0)   execution time : 2.243 s
Press any key to continue.
*/
