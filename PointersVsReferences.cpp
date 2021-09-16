/*
basic program for understanding difference between reference vs pointer
*/


#include<iostream>
using namespace std;

void inc(int a){
    cout <<"Inside inc : " << &a << endl;
    ++a;
}

void inc1(int *a){
    cout <<"Inside inc1 : " << &a << endl;
    *a += 1;
}

void inc2(int &a){
    cout <<"Inside inc2 : " << &a << endl;
    ++a;
}


int main(){

    int i = 3;
    cout <<"Before function :  " << &i << endl;
    inc(i);
    cout << i << endl;

    cout <<"Before function :  " << &i << endl;
    inc1(&i);
    cout << i << endl;

    cout <<"Before function :  " << &i << endl;
    inc2(i);
    cout << i << endl;

    return 0;
}