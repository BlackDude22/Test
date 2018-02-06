#include <iostream>

using namespace std;

string generateHorizontalLine(int length){
string line;
for (int i = 0; i < length; i++)
    line += "*";
return line;
}

string generateVerticalLine(int length){
string line;
line += "*";
for (int i = 0; i < length-2; i++)
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

void generateInterface(int length){
cout << generateHorizontalLine(5) << endl;
cout << generateVerticalLine(5) << endl;
cout << generateNameLine("cock") << endl;
cout << generateVerticalLine(5) << endl;
cout << generateHorizontalLine(5) << endl;
}

int main(){

cout << generateHorizontalLine(5) << endl;
cout << generateVerticalLine(5) << endl;
cout << generateNameLine("cock") << endl;
}
