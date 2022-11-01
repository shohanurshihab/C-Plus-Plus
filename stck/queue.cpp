#include <iostream>
#define size 5

using namespace std;
class Book
{

    private:
       string Book_Name;
       string Author_Name;
       string Published_date;
       float Price;

    public:
        Book(){}
        Book(string booknm,string authnm,string pubdate, float prc){
            this-> Book_Name=booknm ;
            this-> Author_Name=authnm ;
            this-> Published_date=pubdate ;
            this-> Price = prc;
        }
        string getbookName(){
             return this->Book_Name;
        }
        string getauthorname(){
             return this->Author_Name;
        }
        string getpubdate(){
             return this->Published_date;
        }
        float getprc(){
             return this->Price;
        }
        // ;
};
class Queue
{

    public:
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
            cout<<i+1<<". "<<"Book Name: "<<arr[i].getbookName()<<endl;
            cout<<"Author Name: "<<arr[i].getauthorname()<<endl;
            cout<<"Publish Date: "<<arr[i].getpubdate()<<endl;
            cout<<"Price: "<<arr[i].getprc()<<endl;
            cout<<"\n"<<endl;


            //
        }}
};


int main()
{   cout<<"All Books Details:\n"<<endl;
  
    Book s1("Gitanjoli", "Rabidranath Tagore","20-10-1910", 100);
    Book s2("The Blind Assassin", " Margaret Atwood","02-09-2000", 200);
    Book s3("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 100);
    Book s4("Infinite ", "Louis ","21-11-2000", 300);
    Queue q;
    q.enQueue(s1);
    q.enQueue(s2);
    q.enQueue(s3);
    q.enQueue(s3);
    q.printQueue();
    cout<<"--------------"<<endl;
    cout<<"After Dequeing: \n\n";
    q.deQueue();
    q.deQueue();
    q.printQueue();
    return 0;
}
