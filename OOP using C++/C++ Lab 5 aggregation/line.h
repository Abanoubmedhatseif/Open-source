#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include"point.h"


class line {
    private:
        point * p1;
        point * p2;

    public :

        line(point * pa=NULL, point * pb=NULL){
            p1=pa;
            p2=pb;
        }

        void setLineXY(point * pa, point * pb){
            p1=pa;
            p2=pb;
        }

      void lineDraw(){
         int gm, x, y, gd = DETECT, i;
         char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
        initgraph(&gd, &gm, data);
	    line(p1->getX(),p1->getY(),p2->getX(),p2->getY());
	    getch();
        }


};
