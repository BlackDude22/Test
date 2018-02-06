#include <iostream>
#include <string>

using namespace std;

string generateHorizontalLine(int length){
string line;
for (int i = 0; i < length+4; i++)
    line += "*";
return line;
}

string generateVerticalLine(int length){
string line;
line += "*";
for (int i = 0; i < length+2; i++)
    line += " ";
line += "*";
return line;
}

string generateNameLine(string name){
string line;
line += "* ";
line += name;
line += " *";
return line;
}

string generateNameString (string name, int isMale){
string line;
if (isMale == 1)
    line += "Sveikas, ";
else if (isMale == 2)
    line += "Sveika, ";
else line += "Sveiki, ";
return line += name;
}

void generateInterface(string name, int isMale){
int length = generateNameString(name, isMale).length();
cout << generateHorizontalLine(length) << endl;
cout << generateVerticalLine(length) << endl;
cout << generateNameLine(generateNameString(name, isMale)) << endl;
cout << generateVerticalLine(length) << endl;
cout << generateHorizontalLine(length) << endl;
}

bool isMale(string name){
    if(name.at(name.length()-1) == 's')
    return 1;
    else if(name.at(name.length()-1) == 'a' || name.at(name.length()-1) == 'e')
    return 2;
    else return 0;
}

int main(){
    string name;
    cout << "Iveskite varda: "; cin >> name;
    generateInterface(name, isMale(name));
}
