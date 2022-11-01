#include <iostream>
#define size 15

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
        Book(string b,string authname,string pubdate, float prc){
            this-> Book_Name=b ;
            this-> Author_Name=authname ;
            this-> Published_date=pubdate ;
            this-> Price = prc;
        }
        string getBookName(){
             return this->Book_Name;
        }
        string getAuthName(){
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

class Stack {

    public:
    Book arr[size];
    int top=-1;

    void push(Book s){
        if(top >= size ){
            cout<<"Stack is full...";
        }
        else{
            ++top;
            arr[top] = s;
        }
    }

    void pop(){

        if(top < 0){
            cout<<"Stack is empty...";
        }else{
            --top;
        }
    }

    void printStack(){
        for(int i=0; i<=top; i++){
            cout<<i+1<<". "<<"Book Name: "<<arr[i].getBookName()<<endl;
            cout<<"Author Name: "<<arr[i].getAuthName()<<endl;
            cout<<"Publish Date: "<<arr[i].getpubdate()<<endl;
            cout<<"Price: "<<arr[i].getprc()<<endl;
            cout<<"\n"<<endl;


            //
        }
        cout<<endl;
    }

    Book peek(){
        return arr[top];
    }

    void isEmpty(){
        if(top <0){
            cout<<"Stack is empty...";
        }else{
            cout<<"Stack is not empty...\n";
        }
    }
};



int main(void)
{

    cout<<"All Books Details"<<endl;
    cout<<" "<<endl;
    Book s1("Gitanjoli", "Rabidranath Tagore","20-10-1910", 100);
    Book s2("The Blind Assassin", " Margaret Atwood","02-09-2000", 200);
    Book s3("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 100);
    Book s4("Infinite ", "Louis ","21-11-2000", 300);
    Book s5("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 400);
    Book s6("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 500);
    Book s7("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 600);
    Book s8("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 700);
    Book s9("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 100);
    Book s10("Her Infinite Variety", "Louis Auchincloss","21-11-2000", 100);

    Stack stc;
    stc.push(s1);
    stc.push(s2);
    stc.push(s3);
    stc.push(s4);
    stc.push(s5);
    stc.push(s6);
    stc.push(s7);
    stc.push(s8);
    stc.push(s9);
    stc.push(s10);


    //stc.printStack();
    cout<<"-------"<<endl;
    cout<<"After Poping"<<endl;
    cout<<""<<endl;
    stc.pop();
    stc.pop();
    stc.pop();

    stc.isEmpty();

    stc.printStack();

    return 0;
}
