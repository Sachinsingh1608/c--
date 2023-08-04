#include<iostream>
using namespace std;
class queue
{
   public:
   int q[100];
   int front=-1;
   int rear=-1;
   void enqueue(int v)
   {
    if(rear==-1)
    {
        rear++,front++;
        q[rear]=v;
    }
    else if(rear==99)
    {
        cout<<"overflow";
    }
    else
    {
        rear++;
        q[rear]=v;
    }

   }
   void dequeue()
   {
    if(front ==-1)
    cout<<"underflow";
    else if(rear==front)
    {
        cout<<q[front]<<"delete";
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
   }
    void print()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<q[i]<<endl;
        }
    }
   
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
     q.enqueue(20);
    q.dequeue();
    q.print();
    return 0;

}