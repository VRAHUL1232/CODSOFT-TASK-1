#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    double result;

    cout << "\n*********************************\n" << endl;
    cout << "        Simple Calculator\n" << endl;

    do{
        int choice;
        int error = 0;
        cout << "*********************************" << endl;
        cout << "\nPress 1 for Addition" << endl;
        cout << "Press 2 for Subtraction" << endl;
        cout << "Press 3 for Multiplication" << endl;
        cout << "Press 4 for Division" << endl;
        cout << "Press 5 for Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        if (choice ==5){
            exit(0);
        }

        cout << "\nEnter the Number-1: ";
        cin >> num1;
        cout << "\nEnter the Number-2: ";
        cin >> num2;

        switch(choice){
            case 1:
                result = num1+num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1*num2;
                break;
            case 4:
                if (num2 != 0){
                    result = num1/(double)num2;
                }
                else{
                    error = 1;
                }
                break;
        }
        if (error){
            cout << "\nError! Division By Zero is not allowed\n" << endl;
            error = 0;
        }
        else{
            cout << "\nThe result is " << result << '\n' << endl;
        }
    } while(true);

    return 0;
}