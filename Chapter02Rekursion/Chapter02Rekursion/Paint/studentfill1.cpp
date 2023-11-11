
#include "studentfill1.h"
#include <QDebug>

#include <algorithm>

const char* nameOfStudent1(){
    return "Homer Simpson";
}

void recursiveFull(int r, int k, IDrawingParent *pImage, QColor colorOld, QColor colorNew){
    // behöver ej implementeras
}


void recursiveFill(int r, int k, IDrawingParent *pImage, QColor colorOld, QColor colorNew){


    // nedanstående kod är FELAKTIG
    // men den visar hur vissa funktioner fungerar
    for (int deltaR = -1; deltaR <=1 ; deltaR+=1)
        for (int deltaK = -1; deltaK<=1 ; deltaK+=1){
            int rad = r + deltaR;
            int kolumn = k + deltaK;
            if ((*pImage).isInside( rad, kolumn)){
                if ((*pImage).pixel(rad, kolumn) == colorOld)
                    (*pImage).setPixel(rad,kolumn, colorNew);
            }
        }


}
