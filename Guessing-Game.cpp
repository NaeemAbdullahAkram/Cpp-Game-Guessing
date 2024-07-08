#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

guessgame(){
	system("cls");
	 int number, guess , nguess= 1 ;
    srand(time(0));	
    number=rand()%100 + 1 ; 
    do{
        cout<<"Guess the number between 1-100= ";
        cin>>guess;
        if( guess > number ){
            cout<<"The number is larger.\n";
        }
        else if (guess < number){
            cout<<"The number is smaller.\n";
        }
        else{
            cout<<"The number of attempts are "<< nguess <<".\n";

        }
        nguess ++;

    }while( guess!=number );
}