#include<iostream>
#include<string>
#include<cstdlib>  // for rand() and srand()
#include<ctime> // for time()

using namespace std;

string intToString(int num) {
    switch(num) {
        case 0:
            return "stone";
        case 1:
            return "paper";
        case 2:
            return "scissors";
        default:
            return "Invalid Input";
    }
}

using namespace std;
int main(){
     cout<<"\n\t!_____Welcome to stone, paper and scissors_____!\n\nChoose:\n 0 for stone\n 1 for paper\n 2 for scissors\n\nThere are total 5 rounds\n In case of win your score: 300\n In-case of loose your score: -100";
     int r_num;
     int num;
     int score=0;
     int rounds = 0; 
     
    while (rounds<5) {
     //Taking input from user
     cout<<"\n\nEnter your Choice:"<<endl;
     cin>>num;

    // Generating random number
     srand(time(0));
     r_num = rand()%3;

     if (num == r_num) {
        cout <<"\nThis is tie"<<endl;
        cout <<"Your move: "<<intToString(num)<<endl;
        cout <<"computer move: "<<intToString(r_num)<<endl;
     }
     else if(num == 0 && r_num == 2) {
        cout <<"\nYou Won"<<endl;
        cout <<"Your move: "<<intToString(num)<<endl;
        cout <<"computer move: "<<intToString(r_num)<<endl;
        score = score+300;
     }
     else if(num == 1 && r_num == 0) {
        cout <<"\nYou Won"<<endl;
        cout <<"Your move: "<<intToString(num)<<endl;
        cout <<"computer move: "<<intToString(r_num)<<endl;
        score = score+300;
     }
     else if(num == 2 && r_num == 1) {
        cout <<"\nYou Won"<<endl;
        cout <<"Your move: "<<intToString(num)<<endl;
        cout <<"computer move: "<<intToString(r_num)<<endl;
        score = score+300;
     }
     else{
        cout <<"\nYou Lose"<<endl;
        cout <<"Your move: "<<intToString(num)<<endl;
        cout <<"computer move: "<<intToString(r_num)<<endl;
        score = score-100;
     }
    rounds=rounds+1; 
    }
    cout<<"\n\n\t!___CONGRATULATIONS! Your Score is: "<<score<<endl;
    cout<<"\nThanks for playing game"<<endl;

return 0;
}