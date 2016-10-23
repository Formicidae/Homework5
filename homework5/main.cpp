//Edward Bates emb160030 CS 1337.002 Homework 5
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
bool verify(char password[]){

    if(strlen(password) < 6){
        cout << "password must be atleast 6 characters";
        return false;
    }
    if(strlen(password) > 14){
        cout << "password must be less than 14 characters";
        return false;
    }
    bool cUpper;
    bool cLower;
    bool cDigit;
    bool cPunc;
    for(int i = 0;i < strlen(password);i++){
        if(isupper(password[i]))
            cUpper = true;
        if(islower(password[i]))
            cLower = true;
        if(isdigit(password[i]))
            cDigit = true;
        if(ispunct(password[i]))
            cPunc = true;
    }
    if(!cUpper){
        cout << "Password must contain 1 Uppercase character";
        return false;
    }
    if(!cLower){
        cout << "Password must contain 1 Lowercase character";
        return false;
    }
    if(!cDigit){
        cout << "Password must contain 1 Digit character";
        return false;
    }
    if(!cPunc){
        cout << "Password must contain 1 Punctuation character";
        return false;
    }
    return true;
}
int main()
{
    char first[13];
    char last[13];
    char middle[13];
    cout << "Enter you first middle and last name space separated.(Up to 12 chars each)";
    cin >> first;
    cin >> middle;
    cin >> last;

    char* dFull = new char[strlen(first) + strlen(middle) + strlen(last) + 5];
    strcpy(dFull,last);
    strcat(dFull,", ");
    strcat(dFull,first);
    strcat(dFull," ");
    strcat(dFull,middle);
    cout << endl;cout << endl;
    puts(dFull);
    cout << endl;cout << endl;

    cin.ignore(256,'\n');
    bool goodPass = false;
    while(!goodPass)
    {
        cout << "\nEnter a password";
        char password[16];
        cin.getline(password,15);
        goodPass = verify(password);
    }
    cout << "Password is Valid";
    return 0;
}
