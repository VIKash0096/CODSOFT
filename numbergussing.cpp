#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int random,chosen;
    random=(rand()%10)+1;
    cout<<random;
    while(true){

        cout<<"ENTER YOUR NUMBER\n";
        cin>>chosen;
        if(random>chosen){
            cout<<"YOUR CHOSEN NUMBER IS SMALLER THAN THE GUESSED NUMBER\n";
        }
        else if(random==chosen){
            cout<<"YEH YOU HAVE GUESSED IT RIGHT...\n";
            break;
        }
        else{
            cout<<"YOUR CHOSEN NUMBER IS GREATER THAN THE GUESSED NUMBER\n";
        }
    }



}
