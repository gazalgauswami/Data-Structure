//circular queue

#include<iostream>

using namespace std;

class cir
{
    int q[5];
    int front,rear;

    public:
        cir()
        {
            front=rear=-1;
        }
        void insert(int x);
        void delet();
        void display();
};
void cir :: insert(int x)
{
    if((front==0 && rear==4)|| (front==rear+1))
    {
        cout<<"\n queue is overflow";
        return;
    }
    else if(front==-1)
    {
        front=rear=0;
    }
    else if (rear==4){
        rear=0;
    }
    else{
    q[rear]=x;
    rear++;
    }
    
}
void  cir :: delet()
{
    if(front==-1)
    {
        cout<<"\n Underflow ";
        return;
    }
    cout<<"\n Deleted: "<<q[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        if(front==4)
        front=0;

        else
        front++;
    }
}
void  cir :: display(){
    int i;
    if(front==-1){
        cout<<"\n queue is empty";
        return;
    }
    if(front<=rear){
        for(i=front;i<=rear;i++)
        cout<<"\n"<<q[i];
    }
    else{
        for(i=front;i<5;i++)
        cout<<"\n"<<q[i];

        for(i=0;i<=5;i++)
        cout<<"\n"<<q[i];
    }
}
int main(int argc, char const *argv[])
{
    int ch;
    cir q1;
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
    return 0;
}
