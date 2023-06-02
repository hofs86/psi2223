#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // Create a text string, which is used to output the text file
    string myText;
    int line = 1;

    // Read from the text file
    ifstream MyReadFile("pessoas.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        switch (line)
        {
        case 1:
            cout << "Nome: " << myText << endl;
            break;
        case 2:
            cout << "Idade: " << myText << endl;
            break;
        case 3:
            cout << "Nacionalidade: " << myText << endl << endl;
            line = 0;
            break;
        
        default:
            break;
        }
        line+=1;
    }

    // Close the file
    MyReadFile.close();
}