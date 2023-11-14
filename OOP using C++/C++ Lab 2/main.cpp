#include <iostream>

using namespace std;

class Stack{

    int *arr;
    int size;
    int top;

    public:
    Stack () {
    }; // empty construct

    Stack (int Size){
    size=Size ;
    top = -1;
    arr = new int [size];
    } // end construct

    void push(int x){
        if (top == size-1){
            cout<<"Stack full"<<endl ;
        }
        else if (top < size-1){
            top ++ ;
            arr[top]=x;
        cout<<"Added element no : "<<top+1<<"= "<<arr[top]<<endl;
        }
    } // end push

    void pop(){
         if (top>=0){
        cout<<"Removed element no : "<<top+1<<"= "<<arr[top]<<endl;
        top-- ;

         }
         else if (top<=-1){
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


    ~Stack(){
    delete[] arr;
    cout<<"Deleted Successfully"<<endl;
    }




}; // class end

int main()
{

Stack *s1 = new Stack(10);
s1->push(5);
s1->push(4);
s1->push(3);
s1->push(5);
s1->push(7);
s1->pop();



s1->printStack();

//delete s1;
}
