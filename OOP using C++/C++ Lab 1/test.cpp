#include <iostream>
using namespace std;


void setId(int ID);
int getId(void);

class Complex {
    int real;
    int imagine;
public:
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

    Complex Add (Complex c){
        Complex c_add ;
        c_add.setReal(real+c.getReal());
        c_add.setImage(imagine+c.getImagine());
        return c_add;
    }


 friend Complex subFriend (Complex,Complex);
}; //close class



Complex Addout (Complex c,Complex z);

int main()
{

    Complex c1 ;
    Complex c2 ;
    c1.setReal(5);
    c1.setImage(10);
    c2.setReal(50);
    c2.setImage(13);
    Complex c3 = c2.Add(c1);
    c3.print();

    cout<<"Friend function"<<endl ;
    Complex c4 = subFriend(c1,c2);
    c4.print();
        return 0;
}



Complex Addout (Complex c , Complex z){
        Complex c_add ;
        c_add.setReal(c.getReal()+z.getReal());
        c_add.setImage(c.getImagine()+z.getImagine());
        return c_add;
 }

 Complex subFriend (Complex x,Complex z){
        Complex c_add ;
        c_add.setReal(x.getReal()-z.getReal());
        c_add.setImage(x.getImagine()-z.getImagine());
        return c_add;
 }

