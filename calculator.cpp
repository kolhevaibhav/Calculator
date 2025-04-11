#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char operation;

    std::cout<<"This is a simple calcultor";
    std::cout<<"You can perform operations like +,-,*,/ "<<endl;

    std::cout<<"Enter first number: ";
    cin>>num1;

    std::cout<<"Enter the operator: ";
    cin>>operation;

    std::cout<<"Enter second number: ";
    cin>>num2;

    if(operation=='+')
    {
        std::cout<<"Result= "<<num1 + num2<<endl;
    }
    else if(operation=='-')
    {
        std::cout<<"Result= "<<num1-num2<<endl;
    }
    else if(operation=='*')
    {
        std::cout<<"Result="<<num1*num2<<endl;
    }
    else if(operation=='/')
    {
        if(num2!=0){
            std::cout<<"Result= "<<num1/num2<<endl;
        }else{
            std::cout<<"error value is zero"<<endl;
        }
    }else{
        std::cout<<"Invalid operator";
    }

    return 0;
}