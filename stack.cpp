//simpale stack programme

#include<iostream>

using namespace std;

class stack{
int s[5];
int top;
public:
    stack()
    {
        top=-1;
    }
   void push(int x);
   void pop();
   void peep();
   void change();
   void display();
};
void  stack :: push(int x){
     
        if(top>=4){
            cout<<"\n Stack is ovweflow:  ";
            return ;
        }
        top=top+1;
        s[top]=x;
        cout<<"\n inserted "<<x;

        
    
}
void stack :: pop(){
    if(top<0)
    {
        cout<<"\n stack is underflow ";
        return ;
    }
    cout<<"Item delete:  "<<s[top];

    top--;

}
void stack :: peep(){
    int i;
    cout<<"\n Enter the position: ";
    cin>>i;
    if(top-i+1<=-1)
    {
        cout<<"\n Position is not available in stack ";
        return;
    }
    cout<<"item is: "<<s[top-i+1];
}
void stack :: change(){
    int i;
    cout<<"\n Enter the position: ";
    cin>>i;
    if(top-i+1<=-1)
    {
        cout<<"\n Position is not available in stack ";
        return;
    }
    int x;
    cout<<"Enter item tobe change: ";
    cin>>x;

    s[top-i+1]=x;
}
void stack :: display()
{
    if(top<0){
        cout<<"\n Stack is underflow";
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<s[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int ch;
    stack s1;
    while (1){
        cout<<"\n 1.push 2.pop 3.peep 4.change 5.display 6.exit: ";
        cin>>ch;

        switch(ch)
        {
            case(1):
                int x;
                cout<<"\nEnter item tobe insert: ";
                cin>>x;
                s1.push(x);
                break;

            case(2):
                s1.pop();
                break;

            case(3):
                s1.peep();
                break;
            case(4):
                 s1.change();
                 break;
            case(5):
                 s1.display();
                 break;
            case(6):
                exit(0);                  
        }
    }
    
}
