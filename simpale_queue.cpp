//simpale queue

#include<iostream>

using namespace std;

class simple{
    int q[5];
    int front,rear;
    public:
    simple()
    {
        front=rear=-1;
    }
    void insert(int x);
    void delet();
    void display();

};
void simple :: insert(int x)
{
    if(rear==5){
        cout<<"\n Queue is overflow";
        return ;
    }
    if(front==-1){
        front=rear=0;
    }
    q[rear]=x;
    rear++;
}
void simple :: delet()
{
    cout<<"\n Value of front is: "<<front<<":"<<rear;
    if(front==-1){
        cout<<"\n Queue underflow";
        return;
    }
    else{
        cout<<"delete: "<<q[front];
    }
    if(front==(rear-1))
    {
        front=rear=-1;
    }
    else{
        front++;    
    }
}
void simple::display()
{
    int i;
    if(front==-1)
    {
        cout<<"\n queue empty";
        return;
    }
    for(i=front;i<rear;i++)
    {
        cout<<q[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int ch;
    simple q1;
    while (1){
        cout<<"\n 1.insert 2.delet 3.display 4.exit: ";
        cin>>ch;

        switch(ch){
            case(1):
            int x;
            cout<<"\n Enter value: ";
            cin>>x;
            q1.insert(x);
            break;

            case(2):
            q1.delet();
            break;

            case(3):
            q1.display();
            break;

            case(4):
            exit(0);
        }
    }
    //return 0;
}
