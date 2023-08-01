#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string str)
{
    int k = str.length() - 1;
    for(int i = 0; i <= k;) {
        if(!(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z'))
            ++i;
            
        else if(!(tolower(str[k]) >= 'a' && tolower(str[k]) <= 'z'))
            --k;
            
        else if(tolower(str[i]) == tolower(str[k]))
            ++i, --k;
            
        else
            return false;
    }
    
    return true;
}

int main()
{
    cout << "Enter a sentence to check if it's palindrome: ";
    string input;
    getline(cin, input);
    
    if(is_palindrome(input))
        cout << "Sentence is palindrome.\n";
    else
        cout << "Sentence isn't palindrome.\n";
}
