#ifndef POINT_H
#define POINT_H


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

#endif // POINT_H
