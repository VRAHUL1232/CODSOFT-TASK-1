#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace  std;

void MENU(){

    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guessedNumber;
    int userAttempts = 1;

    cout << "**********************************************************\n" << endl;
    cout << "           Welcome to the Number Guessing Game!\n" << endl;
    cout << "**********************************************************" << endl;
    do{
        cout << "Guess a Number(1-100): ";
        cin >> guessedNumber;

        if (guessedNumber > randomNumber){
            cout << guessedNumber << " is Too High! Try Again...\n" << endl;
        }
        else if (guessedNumber < randomNumber){
            cout << guessedNumber << " is Too Low! Try Again...\n" << endl;
        }
        else{
            cout << "Congratulations! You have Guessed the Correct Number " << guessedNumber << " in " << userAttempts;
            if (userAttempts==1){
                cout << " Attempt.\n" << endl;
            }
            else{
                cout << " Attempts.\n" << endl;
            }
        }
        userAttempts++;
    }while(randomNumber != guessedNumber);
}

int main(){
    char userChoice = 'y';
    do{
        MENU();
        cout << "Do you want to Play Again (y/n) ";
        do{
            cin >> userChoice;
            cout << "\n";
            if (userChoice != 'y' and userChoice != 'n'){
                cout << "Invalid Choice\nPlease Enter a Valid Choice (y/n) ";
            }
        }
        while (userChoice != 'y' and  userChoice != 'n');
    }while(userChoice != 'n');

    return 0;
}