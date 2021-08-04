#include <iostream>

using namespace std;



//Adding Three numbers
int addThree(int no1, int no2, int no3){
    return no1 + no2 + no3;
}

//subratcting Two numbers
int subTwo(int no1, int no2){
    return no1 - no2;
}

//Find product of a square
int square(int num){
    return num * num;
}

int main(){

    cout << addThree(1,2,3)<< endl;
    cout << subTwo(5, 4) << endl;
    cout << square(5) << endl;

    cout << 9 % 2 << endl;

    return 0;
}