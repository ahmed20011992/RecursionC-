// studentsFile.cpp

#include "towers.h"
#include "studentsTreTorn1.h"

extern Towers TOWERS;

const char* nameOfStudent(){
    return "Home Simpson";
}


// Returnerar den 3:e pinnen som varken är pinFrom eller pinTo
int otherPin(int pinFrom, int pinTo){
    return 0+1+2 - pinFrom - pinTo;
}


void moveDiscs(int numberOfDiscs, int pinFrom, int pinTo){

    // Provkör denna kod först.
    // Men sudda sedan ut den och skriv din egen kod...


    TOWERS.moveDisc(0,1);
    TOWERS.moveDisc(0,2);
    TOWERS.moveDisc(1,2);
    TOWERS.moveDisc(0,1);


}


