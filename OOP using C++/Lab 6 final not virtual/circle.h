#include"shape.h"
#include<conio.h>
#ifndef circlee
#define circlee

class circ : public shape {
private:
    int radius;
public:
     circ (int x1=0,int y1=0,int rad=0){
        p1.setXY(x1,y1);
        radius = rad;
    }

    void setRadius(int r){
        radius = r;
    }

    void draw(){
        setcolor(15);
	    circle(p1.getX(),p1.getY(),radius);
    }

    void set_point_radius(void){
     int x1,y1,radiuss;
            cout<<"Enter point 1 x"<<endl;
                cin >> x1;
            cout<<"Enter point 1 y"<<endl;
                cin >> y1;
            cout<<"Enter Radius"<<endl;
                cin >> radiuss;
            setPoint1(x1,y1);
            setRadius(radiuss);
    }


};

#endif // circlee
