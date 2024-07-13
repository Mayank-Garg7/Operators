#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"\t\t\t\t\t*%@-/+|| WELCOME IN A OPERATORS WORLD! ||+/-@%*"<<endl;
    cout<<"\n1.Arithmetic Operators. \t\t2.Relational Operators: \t\t3.Logical Operators."<<endl;
    cout<<"\n4.Bitwise Operators. \t\t\t5.Assignment Operators \t\t\t6.Increment and Decrement Operators"<<endl;
    cout<<"\n7.Exit."<<endl;
    do
    {
        cout<<"\nEnter the number of your choice which operation you want to perform : ";
        cin>>c;
        switch(c)
        {
        case '1':
            cout<<"\nEnter two numbers to perform Arithmetic operations : ";
            cin>>a>>b;
            cout << "\na + b = " << a + b;
            cout << "\na - b = " << a - b;
            cout << "\na * b = " << a * b;
            cout << "\na / b = " << a / b;
            cout << "\na % b = " << a % b<<endl;
            break;

        case '2':
            cout<<"\nEnter two numbers to perform Relational operations : ";
            cin>>a>>b;
            cout << "\na > b : " << (a > b);
            cout << "\na < b : " << (a < b);
            cout << "\na >= b: " << (a >= b);
            cout << "\na <= b: " << (a <= b);
            cout << "\na == b: " << (a == b);
            cout << "\na != b: " << (a != b)<<endl;
            break;

        case '3':
            cout<<"\nEnter two numbers to perform Logical operations : ";
            cin>>a>>b;
            cout << "\na && b:" << (a && b);
            cout << "\na || b:" << (a || b);
            cout << "\n!a:" << !a;
            cout << "\n!b:" << !b <<endl;
            break;

        case '4':
            cout<<"\nEnter two numbers to perform Bitwise operations : ";
            cin>>a>>b;
            cout << "\na & b: " << (a & b);
            cout << "\na | b: " << (a | b);
            cout << "\na ^ b: " << (a ^ b);
            cout << "\n~a: " << (~a);
            cout << "\na << 1: " << (a << 1);
            cout << "\nb >> 1: " << (b >> 1)<<endl;
            break;

        case '5':
            cout<<"Going to perform Assignment operations...";
            a+= 3;
            cout << "\na += 3: " << a;
            a -= 2;
            cout << "\na -= 2: " << a;
            a *= 5;
            cout << "\na *= 5: " << a;
            a /= 2;
            cout << "\na /= 2: " << a;
            a %= 4;
            cout << "\na %= 4: " << a<<endl;
            break;

        case '6':
            cout<<"\nEnter a number to perform Increment and Decrement operations : ";
            cin>>a;
            cout << "\na++: " << a++;
            cout<<"\na--:"<<a--;
            cout <<"\n++a:"<< ++a;
            cout<<"\n--a:"<<a--<<endl;
            break;

        case '7':
            cout<<"\nExiting...";
            break;

        default:
            cout<<"\nEnter the write choice. try again...";
            break;
        }

    }
    while(c!=7);

    return 0;
}

