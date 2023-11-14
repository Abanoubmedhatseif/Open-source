
#ifndef LINE_H
#define LINE_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include"point.h"

class lin
{
    private:
    point p1;
    point p2;

    public:

    lin (int x1=0,int y1=0,int x2=0,int y2=0){
        p1.setXY(x1,y1);
        p2.setXY(x2,y2);
    }

    lin (point pa,point pb){
        p1=pa;
        p2=pb;
    }



    void lineDraw(){
         int gm, x, y, gd = DETECT, i;
         char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd, &gm, data);
	    line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
	    getch();
        }


    protected:


};

#endif // LINE_H
