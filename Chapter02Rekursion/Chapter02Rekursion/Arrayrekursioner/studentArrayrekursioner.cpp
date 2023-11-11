
#include "studentArrayrekursioner.h"
#include <cassert>
#include <iostream>
#include <random>

using namespace std;


std::string nameOfStudent(){
    return "Ahmed Elhasan";  // TODO andra till ditt namn!
}
float sum(const float *pBegin, const float *pEnd){
    // TODO
    if (pBegin >= pEnd)
        return 0;
    return *pBegin + sum((pBegin +1),pEnd);

    //return *pBegin + sum(*(pBegin +1),*pEnd); jag felade först för att se alltså FÖSÖKTE anropa med value istället för address men frågan:
    // VARFÖR KOMPILAR FELAR "NO MATCHING FUNCTION CALL TO SUM ?


}
void fillValue(float value,  float *pBegin,  float *pEnd){
    // TODO
    if (pBegin >= pEnd)
        return ;//// den bara för att hoppar ut av arrayen //// varför här måste retunera nånting tomt kan jag skippa att retunerae nånting ?!!!
    *pBegin =value;
    return fillValue(value, (pBegin +1) ,pEnd);
}
bool hasValueInRange(float min, float max, const float *pBegin, const float *pEnd){
    // TODO'
    if (pBegin > pEnd-1)
        return false;
    if (*(pEnd-1) >= min && *(pEnd-1) < max)
        return true;
    else return hasValueInRange(min , max ,pBegin ,pEnd-1);
}

int numberOfValuesInRange(float min, float max, const float *pBegin, const float *pEnd){
    // TODO
 // här fråga labb assistans jag försökte prova ge (numberofRange = 1) istället men jag fick (10) men jag förstår ice varför 10 jag tänkte skulle det vara 6.
    long int numberOfRange =0;
    if (pBegin >= pEnd)
        return 0;
    if (*pBegin >= min && *pBegin < max)
         numberOfRange +=1;

    return numberOfRange + numberOfValuesInRange(min , max , pBegin+1 , pEnd);
}



void studentTest(){
    float arr[]={2,9,7,1,0};
    assert(sum(&arr[0],&arr[5])==19);
    float value = rand()% 10;
    //fillValue(value,&arr[0],&arr[5]);
    for (int i=0; i < 5 ; i++)
        cout << arr[i] <<  endl;
    assert (hasValueInRange(0.0f,9.0f,&arr[0],&arr[5])==1);
    cout << numberOfValuesInRange(0.0f,9.0f,&arr[0],&arr[5]) << "    det ska vara 4 " << endl;


}


// ------------


