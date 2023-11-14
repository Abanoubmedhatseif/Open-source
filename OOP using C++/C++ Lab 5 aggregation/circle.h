#include"point.h"

class circle{

private:
    point * center;
    int radius ;

public:
    circle(point * p,int rad){
        radius = rad;
        center = p;
    }

    void setCenter (point * p){
        center = p;
    }

    void setRadius (int radius){
        this->radius = radius;
    }

     void circleDraw(){
         int gm, x, y, gd = DETECT, i;
         char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
        initgraph(&gd, &gm, data);
	    circle(p->getX(),p->getY(),radius);
	    getch();
        }


};
