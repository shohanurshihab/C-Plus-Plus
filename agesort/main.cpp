#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
    private:
     string name;
     int age;
     double cgpa;

    public:
        Student() {}
    Student(string nm, int ag, double cgp) {
        this->name = nm;
        this->age = ag;
        this->cgpa = cgp;}

        string getName() {
        return this->name;
    }
    int getage() {
        return this->age;
    }
    double getcg() {
        return this->cgpa;
    }
};


int main(void)
{
Student temp;

    Student s1("Shihab0",28,3.5);
    Student s2("Shihab1",32,3.5);
    Student s3("Shihab2",26,3.5);
    Student s4("Shihab3",31,3.5);
    Student s5("Shihab4",29,3.5);
int n=5;
    Student arr[]={s1,s2,s3,s4,s5};
for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        cout<< setw(50)<<endl;
        //cout<<arr[i].getName()<<" ";
        cout<<arr[i].getage()<<" ";
        //cout<<arr[i].getcg()<<" ";

    }cout<< setw(50)<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<(sizeof(arr)/sizeof(arr[0]))-1; j++){
            if(arr[j].getage()> arr[j+1].getage()){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= temp;
            }
        }
   }
    cout<<setw(57)<<"______________"<<endl;
    cout<< setw(57)<<"Sorted  by Age"<<endl;
    //cout<<""<<endl;
    for(int i=0; i<5; i++){
        cout<< setw(50)<<endl;
       // cout<<arr[i].getName()<<" ";
        cout<<arr[i].getage()<<" ";
       // cout<<arr[i].getcg()<<" ";
//
    }
    return 0;
}
