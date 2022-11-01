#include<iostream>
using namespace std;
class item
{
string name;
int price;
public:

void getitem()
{
cout << "Item Name = ";
cin >> name;
cout << "Price = ";
cin >> price;
}
void printitem()
{
cout << "Name : " << name;
cout << "  ->  Price : " << price <<
		"\n";
}
string getName()
        {
            return this->name;
        }
int getPrice()
        {
            return this->price;
        }
};
class Node{

public:
    item data ;
    Node *next;
};
class LinkedList
{

private:
    Node *head;
    Node *tail;
public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }
    void arraytolinkedlist(item arr[],int n)
    {
        Node *temp;
        head = new Node;
        head->data = arr[0];
        head->next = NULL;
        tail = head;
        for (int i=1;i<n;i++)
        {
            temp = new Node;
            temp->data = arr[i];
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
        }
    }
     void ShowList(){
        cout<<"\nLinked List Created\n";
        while(head != NULL){
            cout<<"Product Name: "<<head->data.getName()<<" -> Price: "<<head->data.getPrice()<< " \n";
            head = head->next;
        }
    }

};


int main()
{
cout<<"How many products would you like to enter: \n";
int size;
cin>>size;
item t[size];
item temp;
for(int i = 0; i < size; i++)
{
	cout << "\nItem : " <<
			(i + 1) << "\n";
	t[i].getitem();
}
int ch;
bool flag = true;
while(flag){
cout<<"\nEnter Your Choice\n";
cout<<"1.Show as Array\n";
cout<<"2.Show as Linked List\n";
cout<<"3.Bubble Sort\n";
cout<<"4.Selection Sort\n";
cout<<"5.Binary Search\n";
cout<<"0.Exit\n";

cin>>ch;
switch (ch){
case 1:
{
    if((sizeof(t)/sizeof(t[0]))!=0){
    for(int i = 0; i < size; i++)
    {
        cout << "\nItem Details : " <<
                (i + 1) << "\n";
        t[i].printitem();
    }break;}
    else{cout<<"\nNo Products Entered:\n";break;}
}
case 2:
{
    LinkedList *myList = new LinkedList();
    myList->arraytolinkedlist(t,size);
    myList->ShowList();
    break;
}
case 3:
    {
        cout<<"\nBubble Sort Applied\n";
        for(int i=0; i<size; i++)
        {
        for(int j=0; j<(size-i-1); j++){
            if(t[j].getPrice() > t[j+1].getPrice()){
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<"Name: "<<t[i].getName();
        cout<<"   ->   Price: "<<t[i].getPrice();
        cout<<" \n";
    }
break;
    }
case 4:
    {
        cout<<"\nSelection Sort Applied\n";
        int min_index =0;
           for(int i=0; i<size; i++){
        min_index = i;

        for(int j=i+1; j<size; j++){
            if(t[min_index].getPrice() > t[j].getPrice()){
                min_index = j;
            }
        }

        temp = t[min_index];
        t[min_index] = t[i];
        t[i] = temp;
    }

    for(int i=0; i<size;i++){
         cout<<"Name: "<<t[i].getName();
        cout<<"   ->   Price: "<<t[i].getPrice();
        cout<<" \n";
    }break;
    }

case 5:
{
    int item;
    cout<<"\nEnter Price to Search:";
    cin>>item;
    int low = 0;
    int range =size;

    while(range >= low){
        int mid = (low+range)/2;

        if(t[mid].getPrice() == item){
            cout<<"\nItem With Price "<<item<<" Found at Index: "<<mid<<"\n";
            break;}
        else if(t[mid].getPrice() < item){
            low = mid+1;
        }else {
            range = mid-1;
        }
    }
    if(low>range)
        cout<<"\nItem With Price "<<item<<" is not found\n";
    cout<<endl;
    break;
}
case 0:
{
    flag = false;
    break;
}
default:
    cout<< "\nWrong Input\n";
            break;
}
}
}

