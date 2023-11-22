#include <iostream>

using namespace std;

template <class T>

class Stack{
    T *arr;
    int size;
    int top;

    public:
    Stack () {
       cout<<"Empty Constructor"<<endl ;
    }; // empty construct

    Stack (int size){
    this->size=size ;
    top = -1;
    arr = new T [size];
    arr[size]={0};
    cout<<"Constructor"<<endl ;
    } // end construct

    void push(T x){
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
    arr = new T[size] ;
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


int main()
{
    Stack <char*> s(5);
    s.push("ahmed");
    s.push("abanoub");
    s.push("abeer");
    s.printStack();



}

