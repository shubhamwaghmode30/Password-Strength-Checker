// Creating a Pssword Check Program to Check the Durability of Progrm.

#include <iostream>
using namespace std;

int main()
{
    string Password;
    
    cout << "Enter Your Password : ";
    cin >> Password;
    
    bool hasSpecialchar = false;
    
    if (Password.size() > 8) 
    {
        for (char c : Password)
        {
            if (c == '@' || c == '$' || c == '*' || c == '#' ||
                c == '!' || c == '%' || c == '^' || c == '&' ||
                c == '(' || c == ')' || c == '-' || c == '+' ||
                c == '=' || c == '{' || c == '}' || c == '[' ||
                c == ']' || c == ':' || c == ';' || c == '<' ||
                c == '>' || c == '.' || c == ',' || c == '?' ||
                c == '/' || c == '|' || c == '\\' || c == '`' ||
                c == '~' || c == '"' || c == '\'' || c == '_')
            {
                hasSpecialchar = true;
                break;
            }
        }
        
        if (hasSpecialchar)
        {
            cout << "Your Password is very Strong";
        }
        else 
        {
            cout << "Your Password is Strong";
        }
    }
    else 
    {
        cout << "Your Password is Weak";
    }
    
    return 0;
}
