#include <iostream>

using namespace std;

class Stack{

    int *arr;
    int size;
    int top;

    public:
    Stack () {
       cout<<"Empty Constructor"<<endl ;
    }; // empty construct

    Stack (int size){
    this->size=size ;
    top = -1;
    arr = new int [size];
    arr[size]={0};
    cout<<"Constructor"<<endl ;
    } // end construct

    void push(int x){
        if (top == size-1){
            cout<<"Stack full"<<endl ;
        }
        else if (top < size-1){
            top ++ ; // add +1 before assigning array because top = -1 originally
            arr[top]=x;
            cout<<"Added element no : "<<top+1<<"= "<<arr[top]<<endl;
        }
    } // end push

    void pop(){
         if (top>=0){
         cout<<"Removed element no : "<<top+1<<"= "<<arr[top]<<endl;
         top-- ;
         }
         else if (top=-1){
            cout<<"stack is empty"<<endl;
         }
    }

    void printStack(){
        cout<<endl;
        cout<<"Array Print"<<endl;
        cout<<"------------------"<<endl;
     for(int i=0; i<=top; i++)
     {
         cout<<"Element no : "<<i+1<<"= "<<arr[i]<<endl;
     }
    }

   Stack(Stack& c){
    size=c.size;
    top=c.top;
    arr = new int[size] ;
    for(int i=0; i<=top; i++){
        arr[i]=c.arr[i];
    }
    cout<<"Copy"<<endl;
    } // copy constructor

    ~Stack(){
    delete[] arr;
    cout<<"Deleted Successfully"<<endl;
    }


}; // class end




void copyFun (Stack original);

int main()
{

Stack s1(10);
s1.push(5);
s1.push(4);
s1.push(4);
s1.push(5);

s1.printStack();

Stack s3(s1) ;
s3.push(15);
s3.printStack();





//delete s1;
}



void copyFun (Stack original){
    cout<<"Inside Function"<<endl;
    Stack copied ;
    copied = original ;

}
