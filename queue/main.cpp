#include <iostream>
#define size 5

using namespace std;
class Heavy
{   public:
    int vcl=0;
    double money=0;
    int carNumber;
    int ticketNumber;
    string date;
public:
    Heavy(){}
    void payHeavy_duty(int cm,int tm, string dt)
    {
         this->carNumber=cm;
         this->ticketNumber=tm;
         this->date=dt;
         money=money+800;
         }
int display1()
    {
         cout<<"\nHeavy-Duty\n";
         cout<<"Vehicles no: = "<<carNumber<<endl;
         cout<<"Ticket no: = "<<ticketNumber<<endl;
         cout<<"Date: = "<<date<<endl;
         cout<<"Toll = "<<money<<endl;
         return 0;
    }

};
class Medium:public Heavy
{
  public:
      double money1=0;
        void payMedium_duty(int cm,int tm, string dt)
    {

         this->carNumber=cm;
         this->ticketNumber=tm;
         this->date=dt;
         money1=money1+500;}
int display2()
    {
         cout<<"\nMedium-Duty\n";
         cout<<"Vehicles no: = "<<carNumber<<endl;
         cout<<"Ticket no: = "<<ticketNumber<<endl;
         cout<<"Date: = "<<date<<endl;
         cout<<"Toll = "<<money1<<endl;

         return 0;

    }
};
class Light:public Medium
{
    public:
        double money2=0;
    void payLight_duty(int cm,int tm, string dt)
    {

         this->carNumber=cm;
         this->ticketNumber=tm;
         this->date=dt;
         money2=money2+300;}
int display3()
    {
         cout<<"\nLight-Duty\n";
         cout<<"Vehicles no: = "<<carNumber<<endl;
         cout<<"Ticket no: = "<<ticketNumber<<endl;
         cout<<"Date: = "<<date<<endl;
         cout<<"Toll = "<<money2<<endl;
         return 0;
    }
};

class Queue:public Heavy
{


    public:

    Heavy arr1[size];
    int front = -1;
    int rear = -1;

    void enQueue(Heavy a) {
        if (rear >= size) {
            cout << "Queue is Full..." << endl;

        }
        else if (front == -1 && rear == -1) {
            front++;
            rear++;
            arr1[rear] = a;
        }
        else {
            rear++;
            arr1[rear] = a;
        }
    }
    void deQueue() {

        if (front == -1 && rear == -1) {
            cout << "Queue is empty...";
        }
        else {

            front++;
        }
    }
   void printQueue(){

        for(int i=front; i<=rear; i++){
            cout<<arr1[i].display1()<<endl;

        }
        cout<<endl;
    }
};
class Queue1:public Medium
{


    public:

    Medium arr1[size];
    int front = -1;
    int rear = -1;

    void enQueue(Medium a) {
        if (rear >= size) {
            cout << "Queue is Full..." << endl;

        }
        else if (front == -1 && rear == -1) {
            front++;
            rear++;
            arr1[rear] = a;
        }
        else {
            rear++;
            arr1[rear] = a;
        }
    }
    void deQueue() {

        if (front == -1 && rear == -1) {
            cout << "Queue is empty...";
        }
        else {

            front++;
        }
    }
   void printQueue(){

        for(int i=front; i<=rear; i++){
            cout<<arr1[i].display2()<<endl;

        }
        cout<<endl;
    }
};
class Queue2:public Light
{


    public:

    Light arr1[size];
    int front = -1;
    int rear = -1;

    void enQueue(Light a) {
        if (rear >= size) {
            cout << "Queue is Full..." << endl;

        }
        else if (front == -1 && rear == -1) {
            front++;
            rear++;
            arr1[rear] = a;
        }
        else {
            rear++;
            arr1[rear] = a;
        }
    }
    void deQueue() {

        if (front == -1 && rear == -1) {
            cout << "Queue is empty...";
        }
        else {

            front++;
        }
    }
   void printQueue(){

        for(int i=front; i<=rear; i++){
            cout<<arr1[i].display3()<<endl;
        }
        cout<<endl;

    }
};


int main()
{
    cout<<"                         *********WELCOME TO PADMA BRIDGE**********\n"<<endl;
    Heavy p1,p4;
    Medium p2;
    Light p3;

    p1.payHeavy_duty(208016,999,"20-10-2021");
    p4.payHeavy_duty(208017,998,"20-10-2021");
    p2.payMedium_duty(208018,887,"20-10-2021");
    p3.payLight_duty(208015,661,"20-10-2021");
    Queue q;
    Queue1 q1;
    Queue2 q2;
    q.enQueue(p1);
    q.enQueue(p4);
    q1.enQueue(p2);
    q2.enQueue(p3);
    cout<<"Total in Line: \n";
    q.printQueue();
    q1.printQueue();
    q2.printQueue();

    q.deQueue();
    cout<<"Yet to Pay Fee: \n";
    q.printQueue();
    q1.printQueue();
    q2.printQueue();

    int m=p1.money;
    cout<<"\nTotal paid: "<<m<<endl;



    return 0;
}
