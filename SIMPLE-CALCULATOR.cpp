#include<iostream>
using namespace std;

int main(){

    cout<<endl<<"\t\t\t* SIMPLE CALCULATOR *"<<endl<<endl;

    cout<<"\t# NOTE:-"<<endl;
    cout<<"\t   - you can choose any two number only."<<endl;
    cout<<"\t   - you can choose only one operator, such as"<<endl;
    cout<<"\t\t. Addition(+)"<<endl;
    cout<<"\t\t. subtraction(-)"<<endl;
    cout<<"\t\t. multiplication(/)"<<endl;
    cout<<"\t\t. division(*)"<<endl;
    cout<<"\t\t. Modulus(%)"<<endl;

    cout<<endl<<endl<<"Start Calculation--"<<endl;
    
    int num1;
    cout<<"\tEnter your first number = ";
    cin>>num1;

    int num2;
    cout<<"\tEnter your second number = ";
    cin>>num2;

    char operators;
    cout<<"\tEnter your the operator = ";
    cin>>operators;

    switch (operators)
    {
    case '+':
        cout<<"   ANS:-"<<endl;
        cout<<"\t"<<num1<<" + "<< num2 <<" = "<<num1+num2<<endl;
        break;

    case '-':
        cout<<"   ANS:-"<<endl;
        cout<<"\t"<<num1<<" - "<< num2 <<" = "<<num1-num2<<endl;
        break;

    case '*':
        cout<<"   ANS:-"<<endl;
        cout<<"\t"<<num1<<" * "<< num2 <<" = "<<num1*num2<<endl;
        break;

    case '/':
        cout<<"   ANS:-"<<endl;
        cout<<"\t"<<num1<<" / "<< num2 <<" = "<<num1/num2<<endl;
        break;

    case '%':
        cout<<"   ANS:-"<<endl;
        cout<<"\t"<<num1<<" % "<< num2 <<" = "<<num1%num2<<endl;
        break;
    
    default:
        cout<<"Please enter the numbers or operator.."<<endl;
        break;
    }


    return 0;
}