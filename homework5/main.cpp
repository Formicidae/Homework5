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

    cout << "Enter your first name, or all at once with spaces in between\n";
    string first;
    cin >> first;
    cout << "Enter your middle name\n";
    string middle;
    cin >> middle;
    cout << "Enter your last name\n";
    string last;
    cin >> last;
    string full;
    full = last + ", " + first + " " + middle;
    cout << full + "\n\n";


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
