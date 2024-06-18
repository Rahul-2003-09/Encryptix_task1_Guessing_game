#include<bits/stdc++.h>
#include<cmath>
#include<time.h>
using namespace std;
int main(){
    int guess=-1;
    bool flag=true;
    while(flag){
    int count=0;
    srand(time(0));
    int randam=(rand()%1000) +1;
    cout<<"Enter a Number between 1 and 1000:";
     while(guess!=randam){
      cin>>guess;
      count++;
    if(guess<randam){
        cout<<"NUMBER YOU HAVE GUESSED IS LOWER";

    }else if(guess>randam){
            cout<<"NUMBER YOU HAVE GUESSED IS HIGHER";}
     else {
        cout<<"IT'S CORRECT";
     }
     cout<<endl;
    }
    cout<<"IT TOOK "<<count<< " GUESSES TO GUESS THE NUMBER"<<endl;
    cout<<"WANNA PLAY ONCE AGAIN PRESS 1 ELSE PRESS 0 :";
    cin>>flag;
    }
     
}
