#include <iostream>
#include <random>
#include "stuff.h"

#include "studentIdentiskaAnrop.h"

#include <assert.h>

using namespace ragstuff; // dalgoRandom  och slout
using namespace std;



float minimum(const float *pBegin, const float *pEnd){
    // Min kod skall ändras i uppdraget!

    assert( pEnd-pBegin > 0 );
    if (pEnd - pBegin == 1)
        return *pBegin;
    //const float minstAvResten = minimum(pBegin+1, pEnd);
    if (*pBegin <  minimum(pBegin+1,pEnd) )
        return *pBegin;
    else return  minimum(pBegin+1,pEnd);
}


void studentsTest(){
    // om du vill kan du skriva testkod här
    float arr[]={9,2,1,4,5};
    assert(minimum(&arr[0],&arr[5])==1);
}



void timingExperiment(){
    slout << "timingExperiment." << endl
          << "funktionen \"minimum\" kommer att anropas efter att du tryckt på return."<< endl
          << "(Kor programmet i terminalfonstret sa att du kan trycka pa return!)" << endl << endl;


    const int size = 32;
    float arr[size];
    for (int i=0; i<size; ++i)
        arr[i] = dalgoRandom();

    slout << "Tryck return nu:";
    cin.ignore(INT_MAX, '\n');
    cout << "(beraknar minimum)" << endl;

    float m = minimum(arr, arr+size);

    cout << "Färdig, och minsta talet var " << m << endl;
}



