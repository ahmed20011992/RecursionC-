#include "studentbinsearch1.h"

#include "ragnarstest.h"
#include <cassert>

#include <iostream>
using namespace std;


const char* nameOfStudent1(){
    return "Ahmed Elhasan";
}


/****************************************************************
ANROP:    bool exist = containedInSortedarray(x, pBegin, pEnd);
VERSION:  ...
UPPGIFT:  Returnerar true omm *p==x för något p i
          intervallet [pBegin, pEnd), dvs pBegin <= p < pEnd
          (observera att pEnd skall peka på första elementet efter arrayen)
OBS:      Alla tal mellan pBegin och pEnd måste vara sorterade i
          stigande ordning
*****************************************************************/
bool containedInSortedarray(int x, const int* pBegin,const  int* pEnd)
{
    // TODO        5  4  3  2  1  0  8
    //    int  size = pEnd - pBegin;
    //    const int *pMide= pBegin + (size/2);
    //    if (pEnd-pBegin == 0)
    //        return false;

    //    if (pEnd - pBegin ==1 && *pBegin == x)
    //        return true;
    //    //
    //    if (x > *pMide)
    //        return containedInSortedarray(x,pMide,pEnd);
    //    else return containedInSortedarray(x,pBegin,pMide);
    int size = pEnd - pBegin;
    if (pEnd - pBegin ==0 )
        return false;
    if (pEnd - pBegin==1){
        if (*pBegin ==x)
            return true;
        else return false; ///utan den här raden den kommer att loppa hela tiden i rad 51....
    }
    const int *pMide= pBegin+ (size/2);


    if (x < *pMide)
        return  containedInSortedarray(x,pBegin,pMide);
    else return containedInSortedarray(x,pMide,pEnd);









}// contains




void studentsTest1(){

    cout << "Har borde studentens testresultat synas" << endl << endl;

    // TODO din egen testkod som anropar contains här
    int arr [7]={5,4,3,2,1,0,8};
    assert( containedInSortedarray(10,&arr[0],&arr[7])==0);
    cout << "resultatet är 0 för the nomber 10 tillhör inte till arrayen" << endl;





}
