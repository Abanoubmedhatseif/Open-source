
#include <iostream>

using namespace std;
void swap_by_pointer(int* x , int* y);
void swap_by_reference(int &x , int &y);
void swap_by_value(int x , int y);

int main(){

int x=5 ,y=10;
cout <<"x= "<< x <<"  y= "<<y<<endl;

swap_by_reference(x,y);
cout <<"x= "<< x <<"  y= "<<y<<endl;

//int* ptrX = &x;
//int* ptrY = &y;
swap_by_pointer(&x,&y);
cout <<"x= "<< x <<"  y= "<<y<<endl;


swap_by_value(x,y);
cout <<"After swap b value : x= "<< x <<"  y= "<<y<<endl;



}




void swap_by_pointer(int* x , int* y)
{
    int temp=0;
    temp=*x ;
    *x=*y ;
    *y=temp ;
}

void swap_by_reference(int &x , int &y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
}

void swap_by_value(int x , int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    cout <<"Inside function : x= "<< x <<"  y= "<<y<<endl;
}
