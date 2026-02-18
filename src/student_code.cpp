#include <iostream>
using namespace std;

int getIntValue() {
    // Declare a variable var_int of type int and set its value to 10.
    int var_int = 10;
    return var_int;
}

float getFloatValue() {
    // Declare a variable var_float of type float and set its value to 10.75.
    //return var_float;
    float var_float=10.75;
    return var_float;
    //hello
}

char getCharValue() {
    // Declare a variable var_char of type character and set its value to A.
    //return var_char;
    char var_char = 'A';
    return var_char;
}

int convertFloatToInt(float value) {
    // convert value to int.
    return static_cast<int>(value);
}
    
float fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit -32)*9/5;
    return celsius;
}

}
