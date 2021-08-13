#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

//CRedits => Jeff Njoroge
//Global Vairables
int human, machine = 0;
string pos[3] = {"r", "p", "s"};

//Random Number Generator
int randomNo(){
    srand((unsigned) time(0));
    int randomNumber;
    randomNumber = (rand() % 3) ;
    return randomNumber;
}

//Choice engine 
int engine(string mach, string hum){
    if (mach == hum){
        return 0;
    }else if((hum == pos[0]) && (mach == pos[2])){
        return 1;
    }else if((hum == pos[1]) && (mach == pos[0])){
        return 1;
    }else if((hum == pos[2]) && (mach == pos[1])){
        return 1;
    }else if((mach == pos[0]) && (hum == pos[2])){
        return 2;
    }else if((mach == pos[1]) && (hum == pos[0])){
        return 2;
    }else if((mach == pos[2]) && (hum == pos[1])){
        return 2;
    }else{
        return 3;
    }
}

int main(){
    int randIndex, ans;
    string mach, hum;

    cout << "\nTHIS IS A ROCK, PAPER AND SCISSORS GAME" << endl;
    cout << "R => ROCK,  P => PAPER,   S => SCISSORS \n" << endl;


    while (true)
    {
        randIndex = randomNo();
        cout << "Enter your choice: " << endl;
        cin >> hum;

        mach = pos[randIndex];

        ans = engine(mach, hum);

        if(ans==0){
            cout << "DRAW" << endl;
            printf("** You: %d         Computer: %d **\n\n", human, machine);
        }else if(ans == 1){
            human++;
            cout << "You win" << endl;
            printf("** You: %d         Computer: %d **\n\n", human, machine);
        }else if(ans == 2){
            machine++;
            cout << "Computer wins" << endl;
            printf("** You: %d         Computer: %d **\n\n", human, machine);
        }else{
            cout << "ERROR ----- INVALID CHOICE ==  "<< hum << "\n" << endl;
        }
    }
    
    return 0;
}