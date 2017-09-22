#include<stdio.h>

float Plus(float a, float b) {
    return a + b;
}

float Minus(float a, float b) {
    return a - b;
}

float Multiply(float a, float b) {
    return a * b;
}

float Divide(float a, float b) {
    return a / b;
}


float switchOpcode(float a, float b, char opCode) {
    float result;
    
    switch(opCode) {
        case '+' : result = Plus(a,b);
                    break;
        case '-' : result = Minus(a,b);
                    break;
        case '*' : result = Multiply(a,b);
                    break;
        case '/' : result = Divide(a,b);
                    break;
    }
    
    return result;

}

void switch_to_function_ptr(float a, float b, float (*ptrFunc)(float, float)) {
    float result = ptrFunc(a,b);
    printf("Data : %f", result);
}

void replace_switch() {
    switch_to_function_ptr(2.0, 3.0, &Minus);

}

void main() {
    replace_switch();
    return;
}


