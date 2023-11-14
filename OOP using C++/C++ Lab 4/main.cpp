#include <iostream>
#include <string.h>
using namespace std;

void setId(int ID);
int getId(void);

class Complex {
    int real;
    int imagine;
public:

    Complex(int x=0,int y=0){
    real=x;
    imagine=y ;
    }
    void setReal(int _Real){
        real = _Real;
    }
    int getReal (void){
        return real;
    }
    void setImage(int _Imagine){
        imagine = _Imagine;
    }
    int getImagine (void){
        return imagine;
    }
  void print()
    {
        cout <<real;
        if (imagine>0){
            cout<<"+"<<imagine<<"j"<<endl;
        }
        else if (imagine<0){
            cout<<imagine<<"j"<<endl;
        }
    }

    Complex operator + (const Complex& c){
        Complex temp ((real+c.real),(imagine+c.imagine)) ;
        //c_add.setReal(real+c.getReal());
       // c_add.setImage(imagine+c.getImagine());
        return temp;
    }
    Complex operator - (const Complex& c){
        Complex temp ((real-c.real),(imagine-c.imagine)) ;
        return temp;
    }

    Complex operator + (int x){
        Complex temp ((real+x),(imagine)) ;
        return temp;
    }

    Complex operator - (int x){
        Complex temp (real-x,imagine) ;
        return temp;
    }

     operator == ( Complex x){
        return(this->getReal()==x.getReal() &&  this->getImagine()==x.getImagine());
    }

    Complex operator += (Complex x){
        real= real+x.getReal();
        imagine = imagine+ x.getImagine();
    }

    Complex operator ++ (void){
        real = real+1;
        return * this ;
    }

    Complex operator ++ (int){
        Complex temp(real+1,imagine);
        return * this ;
    }

     operator float (){
        return real;
    }


    int operator [] ( char * String){
        if (strcmp(String , "real")==1){
            return real ;
        }
        else if ( strcmp(String , "imagine")==1){
            return imagine ;
        }
    }







}; //close class

Complex operator + ( int x , Complex c  );
Complex operator - ( int x , Complex c  );

int main()
{
Complex c1(1,5);
Complex c2(10,15);

Complex c3,c4,c5,c6,c7;
c3=c1+c2;
c4=c2-c1;
//c5=c1+10;
c6=10+c1;
c5=10-c1;
//c3.print();
//c4.print();
//c5.print();
c6.print();
c5.print();
cout<<"----------------After (==) ----------------"<<endl;
cout<<(c5==c6)<<endl;

cout<<"----------------Before (+=) ----------------"<<endl;
c5.print();

cout<<"----------------After (+=) ----------------"<<endl;
c5+=c6;

c5.print();

cout<<"----------------After c++ ----------------"<<endl;
c5++;
c5.print();

cout<<"----------------After ++c ----------------"<<endl;
++c5;
c5.print();

cout<<"----------------After casting----------------"<<endl;
cout<<(float)c5<<endl;

cout<<"----------------String compare----------------"<<endl;
Complex c10 (50,15);
cout<<c10["real"];




return 0 ;
}


Complex operator + ( int x , Complex c  ){
        Complex temp(c.getReal()+x,c.getImagine());
        return temp ;
    }

Complex operator - ( int x , Complex c  ){
        Complex temp(c.getReal()-x,c.getImagine());
        return temp ;
    }




