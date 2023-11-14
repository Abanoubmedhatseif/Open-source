#include"point.h"

class circle{

private:
    point p1;
  //  int radius;

public:

    circle(int x=0,int y=0){
        p1.getX()=x;
        p1.getY()=y;
    }

    setCircle_XY (int x,int y){
        p1.getX()=x;
        p1.getY()=y;
    }


    void circleDraw(int radius){
        int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    circle(pr.getx(),pr.gety(),radius);
	    getch();
        closegraph();
    }
}
