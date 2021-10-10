//
//  main.cpp
//  Learn C++
//
//  Created by M. Julius on 10/10/21.
//

#include <iostream>
using namespace std;

int MAX_LENGTH_CHAR = 50;

int main() {
    char name[MAX_LENGTH_CHAR], class_name[MAX_LENGTH_CHAR], prodi[MAX_LENGTH_CHAR];
    int age, body_height, body_weight;
    
    cout << "Please Input your information" << endl;
    cout << "Name: ";
    cin.getline(name, sizeof(name));
    cout << "Class: ";
    cin.getline(class_name, sizeof(class_name));
    cout << "Prodi: ";
    cin.getline(prodi, sizeof(prodi));
    
    cout << string(MAX_LENGTH_CHAR, '-') << endl;

    cout << "My Name: " << name << endl;
    cout << "My Class: " << class_name << endl;
    cout << "My Prodi: " << prodi << endl;
    
    cout << string(MAX_LENGTH_CHAR, '-') << endl;
    cout << string(MAX_LENGTH_CHAR, '-') << endl;
    
    cout << "Name: ";
    cin.getline(name, sizeof(name));
    cout << "Age: ";
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Body Height: ";
    cin >> body_height;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Body Weight: ";
    cin >> body_weight;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << string(MAX_LENGTH_CHAR, '-') << endl;
    
    cout << "My Name: " << name << endl;
    cout << "My Age: " << age << " year" << endl;
    cout << "My Body Height: " << body_height << " cm" << endl;
    cout << "My Body Weight: " << body_weight << " kg"<< endl;
    

    return 0;
}
