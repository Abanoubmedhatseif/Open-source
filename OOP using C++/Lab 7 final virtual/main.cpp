#include <iostream>
#include <graphics.h>
#include<conio.h>
#include "Point.h"
#include "shape.h"
#include "line.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main()
{
int shapeSelected;
int shapeNumber;
cout<<"Enter Number of Shapes u want to print !!"<<endl;
cin >> shapeNumber;

shape * shapelist[shapeNumber];

cout<<"Shapes available :"<<endl;
    cout<<"1. line"<<endl;
    cout<<"2. rectangle"<<endl;
    cout<<"3. circle"<<endl;

for (int i=0 ; i<shapeNumber ; i++){
    cout<<"choose shape number "<<i+1<<endl;
    cin >>shapeSelected;
    while ( shapeSelected>3 || shapeSelected<0 ){
        cout<<"Only 3 shapes available 1,2,3 "<<endl;
        cout<<"Try again"<<endl;
        cin >>shapeSelected;
    }  // to handle

    if (shapeSelected==1){
        shapelist[i]=new linee();
    }
    else if (shapeSelected==2){
        shapelist[i]=new rectan();
    }
    else if (shapeSelected==3){
        shapelist[i]=new circ();
    }
}

    for (int i=0 ; i<shapeNumber ; i++){
        shapelist[i]->setParameters();
    }

  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver,&gmode,"d:\\tc\\bgi");

     for (int i=0 ; i<shapeNumber ; i++){
        shapelist[i]->setColor(13);
        shapelist[i]->draw();
    }
    _getch();

return 0;
}
