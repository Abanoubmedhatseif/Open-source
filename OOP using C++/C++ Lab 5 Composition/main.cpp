#include <iostream>
#include<graphics.h>
#include "point.h"
#include"line.h"
#include <conio.h>
#include <graphics.h>

/*

class point
{
    private:
    int x;
    int y;

    public:
    point(int x1=0,int y1=0){
        x=x1;
        y=y1;
    }
    void setX (int x1){
    x=x1;
    }

    void setY (int y1){
    y=y1;
    }

    void setXY (int x1 , int y1){
        x=x1;
        y=y1;
    }

    int getX (){
    return x;
    }

    int getY (){
    return y;
    }


};

*/
/*
using namespace std;
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
	    line(10,13,16,20);
	    getch();
    }




};*/

void circleDraw(){
         int gm, x, y, gd = DETECT, i;
         char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd, &gm, data);
	    circle(100,100,80);
	    getch();
    }

int main()
{
//lin l;

//l.lineDraw();

circleDraw();

return 0;
}
