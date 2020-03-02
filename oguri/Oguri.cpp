#include "Oguri.h"
#include <iostream>
#include <cmath>
using namespace std;

Oguri::Oguri(){
}
void Oguri::bai1(){
    //S(n) = 1 + 2 + 3 + c + n
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        Bai1 += i;
    }
    cout <<"S(n)= " << Bai1 <<endl;
}

void Oguri::bai2(){
    //S(n) = 1^2 + 2^2 + c + n^2
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        Bai2 = Bai2 + i*i;
    }
    cout <<"S(n^2)= " << Bai2 <<endl;
}

void Oguri::bai3(){
    //S(n) = 1 + 1/2 + 1/3 + c + 1/n
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        Bai3 = Bai3 + 1/i;
    }
    cout <<"S(1/n)= "<<Bai3<<endl;
}
