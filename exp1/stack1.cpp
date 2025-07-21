#include<iostream>
using namespace std;
class stack{
    int top,cap,*a;
    public:

    stack(int cap){
        this->cap = cap;
        top=-1;
        a=new int [cap];
    }
    ~stack(){
        delete[] a;
    }
    bool push(int x){
        if (top >= cap-1){
            cout<<"stack overflow"<<endl;
            return 0;
        }
        a[++top] = x;
        return 1;
    }

    int pop(){
        if (top < 0){
            cout<<"stack underflow"<<endl;
            return 0;
        }

        return a[top--];

    }
    int top(){
        if(top<0){
            cout<<"Stack Empty"<<endl;

        }
        return a[top];
    }
    bool isEmpty(){
        if(top<0){
            return 1;

        }
        else return 0;
    }
    
};

int main(){
    int cap,n;

    cout<<"Enter the size of stack"<<endl;
    cin>>cap;

    stack s1(cap);

    cout<<"Enter "<<cap<<" the elements :"<<endl;
    for(int i=0;i<cap;i++){
        cin>>n;
        s1.push(n);
    }

    do{
        cout
    }    




}