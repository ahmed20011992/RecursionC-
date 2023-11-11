#include <iostream>
#include <string>
#include "stuff.h"
#include "studentbadgames.h"
#include <cassert>

#include <algorithm>

using namespace ragstuff;
using namespace std;




bool verify(bool ok, string str, int a, int b= -9999){
    if (!ok){
        slout << str << ", a="<<a;
        if (b!=-9999)
            slout << ", b="<<b;
        slout << endl;
    }
    return ok;
}


void test( string name, function<int(int,int)> f1, function<int(int,int)> f2){
    slout << "test: " << name << endl;
    bool ok = true;
    for (int a=0; a<5; ++a)
        for (int b=0; b<5; ++b){
            if (f1(a,b) != f2(a,b)){
                slout << name << "(" << a << "," << b << ") is not " << f2(a,b) << endl;
                slout << slow << "error detected!" << endl;
                assert( false );
            }
        }
}

void test( string name, function<int(int)> f1, function<int(int)> f2){
    for (int a=0; a<5; ++a)
        if (f1(a) != f2(a) ){
            slout << name << "(" << a << ") is not " << f2(a) << endl;
            slout << slow << "error detected!" << endl;
            assert( false );
        }
}

int myPow(int a, int n){
    int result = 1;
    for (int i=0; i<n; ++i)
        result *= a;
    return result;
}

int myFac(int n){
    int result = 1;
    for (int i=1; i<=n; ++i)
        result *= i;
    return result;
}

//***********************************************************************
// ANROP:   ragnarsTest( );
// VERSION: 2010-01-15
// UPPFIFT: Testar en eller flera rutiner som studenten har skrivit.
//***********************************************************************
bool ragnarsTest1(){

    slout << endl << endl << "ragnarsTest" << endl;

    verifyStudentsName( nameOfStudent() );

    test("sum", sum, [](int a, int b) {return a+b;});
    test("diff", diff, [](int a, int b) {return a-b;});
    test("product", product, [](int a, int b) {return a*b;});
    test("pow", pow, myPow);
    test("fac", fac, myFac);


     slout << "ragnarsTest lyckades!" << endl
           << " .. men kolla själv att du inte anvant + - * i din kod!" << endl << endl;


    return true;
}// ragnarsTest
