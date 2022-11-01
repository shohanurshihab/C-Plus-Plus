#include <iostream>
#define size 5

using namespace std;
class Book
{  private:
       string Book_Name;
       string Author_Name;
       string Published_date;
       int Price;
    public:
        Book(){}
        Book(string b,string a,string p, int k){
            this-> Book_Name=b ;
            this-> Author_Name=a ;
            this-> Published_date=p ;
            this-> Price =k;
        }
        string getbnm(){
             return this->Book_Name;
        }
        string getathnm(){
             return this->Author_Name;
        }
        string getpbdt(){
             return this->Published_date;
        }
        int getpc(){
             return this->Price;
        }      
};
class Queue
{    public:
        Book arr[size];
        int front = -1;
        int rear = -1;
    void enQueue(Book a){
    if(rear >= size){
            cout<<"Queue is Full..."<<endl;
        }else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = a;
        }else{
            rear++;
            arr[rear] = a;
        }
    }
    void deQueue(){
        if(front == -1 && rear == -1){
            cout<<"Queue is empty...";
        }else{
            front++;
        }
    }
     void printQueue(){
        for(int i=front; i<=rear; i++){
            cout<<arr[i].getbnm()<<endl;
            cout<<arr[i].getathnm()<<endl;
            cout<<arr[i].getpbdt()<<endl;
            cout<<arr[i].getpc()<<endl;          
        }
        }
};
int main(void)
{     
    Book b1("x", "y","1971", 60);
    Book b2("z", " q","2000", 20);
    Book b3("t", "s","1990", 10);
    Book b4("I", "L ","1876", 30);
    Queue q;
    q.enQueue(b1);
    q.enQueue(b2);
    q.enQueue(b3);
    q.enQueue(b3);
    q.printQueue();
    cout<<"--------------"<<endl;
    q.deQueue();
    q.deQueue();
    q.printQueue();
    return 0;
}
