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
int shapeNumber;
cout<<"Enter Number of Shapes u want to print !!"<<endl;
cin >> shapeNumber;

int * shapelist = new int[shapeNumber];
linee * l = new linee [shapeNumber];
rectan * r = new rectan [shapeNumber];
circ * c = new circ [shapeNumber];

 // variables to track each shape number
  int linCount =0;
  int recCount =0;
  int cirCount =0;

cout<<"Shapes available enter no :"<<endl;
cout<<"1. line"<<endl;
cout<<"2. rectangle"<<endl;
cout<<"3. circle"<<endl;

    for (int i=0;i<shapeNumber;i++){   // for loop to accept user input
        int test=0 ;
       cout<<"choose shape number "<<i+1<<endl;
       cin >> test ;
            while (test<0 || test>=4){
                cout<<"Enter 1 or 2 or 3 only "<<endl;
                cout<<"choose shape number "<<i+1<<endl;
                cout<<"1. line"<<endl;
                cout<<"2. rectangle"<<endl;
                cout<<"3. circle"<<endl;
                cin >> test ;
            }  // while loop to validate the input
            shapelist[i]=test;
    }

    for (int j=0;j<shapeNumber;j++){
        if (shapelist[j]==1){
            cout<<"For Line number : "<<linCount+1<<endl;
            l[linCount].set_2_points();
            linCount++;
        }
        else if (shapelist[j]==2){
            cout<<"For rectangle number : "<<recCount+1<<endl;
            r[recCount].set_2_points();
            recCount++;
        }
        else if (shapelist[j]==3){
            cout<<"For Circle number : "<<cirCount+1<<endl;
            c[cirCount].set_point_radius();
            cirCount++;
        }
    }

  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver,&gmode,"d:\\tc\\bgi");

for (int i=0 ; i<linCount; i++){
        l[i].draw();
}
for (int i=0 ; i<recCount; i++){
        r[i].draw();
}
for (int i=0 ; i<cirCount; i++){
        c[i].draw();
}
    _getch();


return 0;
}
