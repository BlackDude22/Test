#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

string generateNameString (string name, int isMale){
if (isMale == 1)
    return "Sveikas, " + name;
else if (isMale == 2)
    return "Sveika, " + name;
else return "Sveiki, " +  name;
}

void generateInterface(string name, int isMale){
    for (int i = 0; i < 5; i++){
        if (i == 0 || i == 4){
            for (int j = 0; j < generateNameString(name, isMale).length()+4; j++)
                cout << "*";
            cout << endl;
        }
        else if (i == 1 || i == 3){
            cout << "*";
            for (int j = 0; j < generateNameString(name, isMale).length()+2; j++)
                cout << " ";
            cout << "*";
            cout << endl;
        }
        else cout << "* " + generateNameString(name, isMale) + " *" << endl;
    }
}

int isMale(string name){
    if(name.at(name.length()-1) == 's'){
        return 1;
    }
    else if(name.at(name.length()-1) == 'a' || name.at(name.length()-1) == 'e'){
        return 2;
    }
    else return 0;
}

int main(){
    string name;
    cout << "Iveskite varda: "; cin >> name;
    generateInterface(name, isMale(name));
}
