#include <iostream>
using namespace std;

int main()
{
    input_type_error:
    cout << "Input type (c, f, k): ";
    char input_type;
    cin >> input_type;
    if(!(input_type == 'c' || input_type == 'f' || input_type == 'k')) {
        cout << "Wrong input type.\n";
        goto input_type_error;
    }
    
    output_type_error:
    cout << "Output type (c, f, k): ";
    char output_type;
    cin >> output_type;
    if(!(output_type == 'c' || output_type == 'f' || output_type == 'k')) {
        cout << "Wrong output type.\n";
        goto output_type_error;
    }
    
    cout << "Temperature value: ";
    double value;
    cin >> value;
    
    if(input_type == output_type)
        ; //empty statement
    
    else if(input_type == 'c')
        if(output_type == 'f')
            value = value * 9/5 + 32;  
        else
            value += 273.15;
    
    else if(input_type == 'f') {
        value = (value - 32) * 5/9;
        if(output_type == 'k')
            value += 273.15;
    }
    
    else {
        value -= 273.15;
        if(output_type == 'f')
            value = value * 9/5 + 32;
    }
    
    cout << "The new value is: " << value << " " << char(toupper(output_type)) << '\n';
}
