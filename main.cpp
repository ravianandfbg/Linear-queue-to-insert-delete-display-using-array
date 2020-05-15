#include<iostream>
using namespace std;
int queue[5],n=5,front=-1,rear=-1;
void Insert()
{
    int item;
    if(rear==n-1)
        cout<<"Queue Overflow"<<endl;
        else
        {
           if(front==-1)
            front=0;
           cout<<"Insert an item in the queue: "<<endl;
           cin>>item;
           rear++;
           queue[rear]=item;
           }
}
void Delete()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue Underflow"<<endl;
        return;
    }
    else
    {
     cout<<"Element deleted from queue: "<<queue[front]<<endl;
     front++;
    }
    }
    void Display()
    {
        if(front==-1)
            cout<<"Queue is empty"<<endl;
        else{
            cout<<"Queue elements are: "<<endl;
        for(int i=front;i<=rear;i++)
            cout<<queue[i]<<endl;
    }
}
int main()
{
    int a;
    cout<<"1.Insert an element to queue"<<endl;
    cout<<"2.Delete an element from queue"<<endl;
    cout<<"3.Display the element of queue"<<endl;
    cout<<"4.Exit"<<endl;
    do
    {
        cout<<"Enter your choice: "<<endl;
        cin>>a;
        switch(a)
        {
        case 1: Insert();
        break;
        case 2: Delete();
        break;
        case 3: Display();
        break;
        case 4: cout<<"Exit"<<endl;
        break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    while(a!=4);
        return 0;
}
