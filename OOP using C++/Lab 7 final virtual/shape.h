#ifndef Shapeee
#define Shapeee

#include <graphics.h>
#include <stdlib.h>

using namespace std;

class shape{
private:

protected:

    int Color;
    pointt p1;
    pointt p2;

public:

    void setPoint1(int x1=0,int y1=0){
        p1.setXY(x1,y1);
    }
    void setPoint2(int x1=0,int y1=0){
        p2.setXY(x1,y1);
    }
    void setColor (int coloor){
        Color = coloor ;
    }

    int getPointX1(void){
        return p1.getX();
    }
    int getPointY1(void){
        return p1.getY();
    }
    int getPointX2(void){
        return p2.getX();
    }
    int getPointY2(void){
        return p2.getY();
    }

    virtual void draw () = 0;
    virtual void setParameters() = 0 ;


};


#endif //shape
