#ifndef pointttt
#define pointttt

class pointt {
private:
    int x;
    int y;

public:
    pointt(int x1=0,int y1=0){
        x=x1;
        y=y1;
    }

    void setX(int _x){
        x=_x;
    }

    void setY(int _y){
        y=_y;
    }

    void setXY(int _x,int _y){
        x=_x;
        y=_y;
    }

    int getX (void){
        return x;
    }

    int getY(void){
        return y;
    }

};



#endif // pointt
