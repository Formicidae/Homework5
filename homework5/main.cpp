#include <iostream>

using namespace std;


bool verify(string password){

    if(password.length() < 6){
        cout << "password must be atleast 6 characters";
        return false;
    }
    if(password.length() > 14){
        cout << "password must be less than 14 characters";
        return false;
    }

    bool cUpper;
    bool cLower;
    bool cDigit;
    bool cPunc;
    for(int i = 0;i < password.length();i++){
        if(password[i] < 91 && password[i] > 64){
            cUpper = true;
        }
        if(password[i] < 123 && password[i] > 96){
            cLower = true;
        }
        if(password[i] < 58 && password[i] > 47){
            cDigit = true;
        }
        if(password[i] == 33 || password[i] == 63 || password[i] == 46 || password[i] == 48 || password[i] == 49 || password[i] == 44 ||password[i] == 34 ||password[i] == 96 ||password[i] == 45 ||password[i] == 40 ||password[i] == 41){
            cPunc = true;
        }
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
    char first[12];
    char last[12];
    char middle[12];
    char full[40];
    //cout << "Enter your first name, or all at once with spaces in between\n";
    cout << "Enter you first middle and last name space separated.";

    cin >> first;
    //cout << "Enter your middle name\n";
    cin >> middle;
    //cout << "Enter your last name\n";
    cin >> last;


    int i = 0;
    while(isalpha(first[i])){
        cout << first[i++];
    }

    i = 0;
    while(isalpha(middle[i])){
        cout << middle[i++];
    }

    i = 0;
    while(isalpha(last[i])){
        cout << last[i++];
    }

    i = 0;
    while(isalpha(last[i])){
        full[i] = last[i++];
    }
    i++;
    full[i] = ',';
    i++;
    full[i] = ' ';
    i++;
    int j = 0;
    while(isalpha(first[j])){
        full[i++] = first[j++];
    }
    i++;
    full[i++] = ' ';
    int k = 0;
    while(isalpha(middle[k])){
        full[i++] = middle[k++];
    }
    i++;
    full[i] = ' ';

    //full = last + ", " + first + " " + middle;
    //cout << full + "\n\n";

    cout << endl;
/*
    i = 0;
    while(isalpha(full[i]) || ispunct(full[i])){
        cout << full[i++];
    }

    cout << full[i++];
    while(isalpha(full[i])){
        cout << full[i++];
    }

    cout << full[i++];

    while(isalpha(full[i])){
        cout << full[i++];
    }
*/
    int p = 1;
    int spaces = 0;
    while(true){
        if(isspace(full[p])){
            spaces++;
            if(spaces == 4)
                break;
        }

        cout << full[p];
        p++;

    }
    cout << endl;

    bool goodPass = false;
    while(!goodPass)
    {
        cout << "Enter a password";
        string password;
        cin >> password;
        goodPass = verify(password);
    }


    return 0;
}
