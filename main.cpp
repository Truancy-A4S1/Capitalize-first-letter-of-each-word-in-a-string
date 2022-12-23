
    // Capitalize first letter of each word in a string

#include <iostream>
#include <string.h>

using namespace std;


char return_Cap(char c)
{
    switch(c){
    case 'a':
        return 'A';
    case 'b':
        return 'B';
    case 'c':
        return 'C';
    case 'd':
        return 'D';
    case 'e':
        return 'E';
    case 'f':
        return 'F';
    case 'g':
        return 'G';
    case 'h':
        return 'H';
    case 'i':
        return 'I';
    case 'j':
        return 'J';
    case 'k':
        return 'K';
    case 'l':
        return 'L';
    case 'm':
        return 'M';
    case 'n':
        return 'N';
    case 'o':
        return 'O';
    case 'p':
        return 'P';
    case 'q':
        return 'Q';
    case 'r':
        return 'R';
    case 's':
        return 'S';
    case 't':
        return 'T';
    case 'u':
        return 'U';
    case 'v':
        return 'V';
    case 'w':
        return 'W';
    case 'x':
        return 'X';
    case 'y':
        return 'Y';
    case 'z':
        return 'Z';
    case ' ':
        return ' ';
    default:
        return c;
    }
}

char return_Min(char c)
{
    switch(c){
    case 'A':
        return 'a';
    case 'B':
        return 'b';
    case 'C':
        return 'c';
    case 'D':
        return 'd';
    case 'E':
        return 'e';
    case 'F':
        return 'f';
    case 'G':
        return 'g';
    case 'H':
        return 'h';
    case 'I':
        return 'i';
    case 'J':
        return 'j';
    case 'K':
        return 'k';
    case 'L':
        return 'l';
    case 'M':
        return 'm';
    case 'N':
        return 'n';
    case 'O':
        return 'o';
    case 'P':
        return 'p';
    case 'Q':
        return 'q';
    case 'R':
        return 'r';
    case 'S':
        return 's';
    case 'T':
        return 't';
    case 'U':
        return 'u';
    case 'V':
        return 'v';
    case 'W':
        return 'w';
    case 'X':
        return 'x';
    case 'Y':
        return 'y';
    case 'Z':
        return 'z';
    case ' ':
        return ' ';
    default:
        return c;
    }
}

int main(){

string str;
cout << "This program will capitalize the first letter of each word" << endl << endl;
cout << "Input: ";

// Accept a string using getline
getline (cin, str);

    // Loop all the way until the end of the string
    for(int i=0; i<str.length(); i++)
    {
        // Set every character in lowercase
        str[i] = return_Min(str[i]);

        // Set the first letter into uppercase
        if(i==0)
        {
            str[i] = return_Cap(str[i]);
        }
        // Set the char to uppercase if the previous char is an empty space
        if (str[i-1] != ' '){

        }
        else
        {
            str[i] = return_Cap(str[i]);
        }
    }

    cout << endl << "Output: ";
    // Print the string
    for(int j=0; j<str.length(); j++)
    {
        cout << str[j];
    }
    cout << endl;
}
