#include"shape.h"
#include<conio.h>
#ifndef lineeee
#define lineeee

class linee : public shape{
private:
public:
    linee (int x1=0,int y1=0,int x2=0,int y2=0){
        p1.setXY(x1,y1);
        p2.setXY(x2,y2);
    }

    void draw(){
        setcolor(15);
	    line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }


    void set_2_points(void){
        int x1,y1,x2,y2 ;
        cout<<"Enter point 1 x"<<endl;
            cin >> x1;
        cout<<"Enter point 1 y"<<endl;
            cin >> y1;
        cout<<"Enter point 2 x"<<endl;
            cin >> x2;
        cout<<"Enter point 2 y"<<endl;
            cin >> y2;
        setPoint1(x1,y1);
        setPoint2(x2,y2);
    }




};
#endif //linee
