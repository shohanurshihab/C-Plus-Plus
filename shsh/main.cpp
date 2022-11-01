#include<iostream>
using namespace std;
class Person{
//Data Members of Person
//Base class
//Single inheritance
protected:
    string name;
    int age;
    string Gender;
public:
    Person(string name,
           int age,
           string Gender){
               cout<<"Person Constructor is called "<<endl;
    this->name=name;
    this->age=age;
    this->Gender=Gender;
    }
    //Setter and Getter
    void setname(string name){this->name=name;}
    string getname(){return name;}
    void setage(int age){this->age=age;}
    int getage(){return age;}
    void setGender(string Gender){this->Gender=Gender;}
    string getGender(){return Gender;}

    void showPerson(){
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Gender:"<<Gender<<endl;
    }
    };
class Employee:virtual public Person{
//Data Members of Employee
//Single inheritance
// Intermediate Derived class
protected:
    long int Employeesalary;
    string EmployeeId;
    string designation;
    int Workinghour;
    string Email;
    string Joiningdate;
    string Companyname;
public:
    //Constructor
    Employee(string name,
             int age,
             string Gender,
             long int Employeesalary,
             string EmployeeId,
             string designation,
             int Workinghour,
             string Email,
             string Joiningdate,
             string Companyname):Person(name,age,Gender){
                 cout<<"Employee Constructor is called "<<endl;
             this->Employeesalary=Employeesalary;
             this->EmployeeId=EmployeeId;
             this->designation=designation;
             this->Workinghour=Workinghour;
             this->Email=Email;
             this->Joiningdate=Joiningdate;
             this->Companyname=Companyname;
             }
  //Setter and Getter
   void  setEmployeesalary(long int  Employeesalary){this-> Employeesalary= Employeesalary;}
    long int getEmployeesalary(){return Employeesalary;}
     void setEmployeeId(string EmployeeId){this->EmployeeId=EmployeeId;}
    string getEmployeeId(){return EmployeeId;}
     void setdesignation(string designation){this->designation=designation;}
    string getdesignation(){return designation;}
     void setWorkinghour(int Workinghour){this->Workinghour=Workinghour;}
    int getWorkinghour(){return Workinghour;}
     void setEmail(string Email){this->Email=Email;}
    string getEmail(){return Email;}
     void setJoiningdate(string Joiningdate){this->Joiningdate=Joiningdate;}
    string getJoiningdate(){return Joiningdate;}
     void setCompanyname(string Companyname){this->Companyname=Companyname;}
    string getCompanyname(){return Companyname;}

    void showEmployee(){
    showPerson();
    cout<<"Employee Salary:"<<Employeesalary<<endl;
    cout<<"Employee Id:"<<EmployeeId<<endl;
    cout<<"Designation:"<<designation<<endl;
    cout<<"Working Hour:"<<Workinghour<<endl;
    cout<<"Email:"<<Email<<endl;
    cout<<"Joining Date:"<<Joiningdate<<endl;
    cout<<"Company Name:"<<Companyname<<endl;
    }
};
class Faculty: public Employee{
    //Data Members of Faculty
    //Derived class
    //Multilevel Inheritance
protected:
    int numberofcourse;
    string Mobileno;
    int numberofdepartment;
public:
    Faculty(string name,
             int age,
             string Gender,
             long int Employeesalary,
             string EmployeeId,
             string designation,
             int Workinghour,
             string Email,
             string Joiningdate,
             string Companyname,
             int numberofcourse,
              string Mobileno,
              int numberofdepartment):Employee(name,age,Gender,Employeesalary,EmployeeId,designation,Workinghour,Email,Joiningdate,Companyname),
              Person(name,age,Gender){
                  cout<<"Faculty Constructor is called "<<endl;
              this->numberofcourse=numberofcourse;
              this->Mobileno=Mobileno;
              this->numberofdepartment=numberofdepartment;
              }
              //Setter and Getter
              void setnumberofcourse(int numberofcourse){this->numberofcourse =numberofcourse;}
              int getnumberofcourse(){return numberofcourse;}
              void setMobileno(string Mobileno){this->Mobileno =Mobileno;}
              string getMobileno(){return Mobileno;}
              void setnumberofdepartment(int numberofdepartment){this->numberofdepartment =numberofdepartment;}
             int getnumberofdepartment(){return numberofdepartment;}

             void showFaculty(){

              showEmployee();
              cout<<"Number of course:"<<numberofcourse<<endl;
              cout<<"Mobile number:"<<Mobileno<<endl;
              cout<<"Number of department:"<<numberofdepartment<<endl;

            }


              };
  class Officer:public Employee{
      //Data Members of Officer
      //Derived class
      //Multilevel inheritance

  protected:
      int numberofAnnex;
  public:
      Officer(string name,
             int age,
             string Gender,
             long int Employeesalary,
             string EmployeeId,
             string designation,
             int Workinghour,
             string Email,
             string Joiningdate,
             string Companyname,
             int numberofcourse,
              string Mobileno,
              int numberofdepartment,
              int numberofAnnex):Employee(name,age,Gender,Employeesalary,EmployeeId,designation,Workinghour,Email,Joiningdate,Companyname),
              Person(name,age,Gender){
                  cout<<"Officer Constructor is called "<<endl;
              this->numberofAnnex=numberofAnnex;
              }
              //Getter and setter
              void setnumberofAnnex(int numberofAnnex){this->numberofAnnex=numberofAnnex;}
              int getnumberofAnnex(){return numberofAnnex;}

              void showOfficer(){
                  showEmployee();
                  cout<<"number of annex:"<<numberofAnnex<<endl;

              }

      };
      class Student:virtual public Person{
          //Data Members of Student
          //Derived class
          //Single inheritance
  protected:
      float CGPA;
    string section;
    string Id;
    string Department;
    string Institution;
    string semester;
    string BloodGroup;
  public:
    Student(string name,
            int age,
            string Gender,
            float CGPA,
            string section,
            string Id,
            string Department,
            string Institution,
            string semester,
            string BloodGroup):Person(name,age,Gender){
                cout<<"Student Constructor is called "<<endl;
              this->CGPA=CGPA;
              this->section=section;
              this->Id=Id;
              this->Department=Department;
              this->Institution=Institution;
              this->semester=semester;
              this->BloodGroup=BloodGroup;
              }
//Setter and Getter
             void setCGPA(float CGPA){this->CGPA =CGPA;}
              float getCGPA(){return CGPA;}
              void setsection(string section){this->section =section;}
              string getsection(){return section;}
              void setId(string Id){this->Id =Id;}
              string getId(){return Id;}
              void setDepartment(string Department){this->Department =Department;}
              string getDepartment(){return Department;}
              void setInstitution(string Institution){this->Institution =Institution;}
              string getInstitution(){return Institution;}
              void setsemester(string semester){this->semester =semester;}
             string getsemester(){return semester;}
              void setBloodGroup(string BloodGroup){this->BloodGroup =BloodGroup;}
              string getBloodGroup(){return BloodGroup;}

              showStudent(){
              showPerson();
              cout<<"CGPA:"<<CGPA<<endl;
              cout<<"Section:"<<section<<endl;
              cout<<"ID:"<<Id<<endl;
              cout<<"Department:"<<Department<<endl;
              cout<<"Institution:"<<Institution<<endl;
              cout<<"Current Semester:"<<semester<<endl;
              cout<<"Blood Group:"<<BloodGroup<<endl;
              }
      };
   class ScholarshipStudent:public Student{
       //Data Members of ScholarshipStudent
   protected:
       float Minimumcgpa;
       string Scholarshipyear;
       float Scholarshippercentage;
   public:
     ScholarshipStudent(string name,
            int age,
            string Gender,
            float CGPA,
            string section,
            string Id,
            string Department,
            string Institution,
            string semester,
            string BloodGroup,
            float Minimumcgpa,
            string Scholarshipyear,
            float Scholarshippercentage):Student(name,age,Gender,CGPA,section,Id,Department,Institution,semester,BloodGroup),Person(name,age,Gender){
            cout<<"Scholarship Student Constructor is called "<<endl;
            this->Minimumcgpa=Minimumcgpa;
            this->Scholarshipyear=Scholarshipyear;
            this->Scholarshippercentage=Scholarshippercentage;
            }
            //Setter and Getter
            void setMinimumcgpa(float Minimumcgpa){this->Minimumcgpa =Minimumcgpa;}
              float getMinimumcgpa(){return Minimumcgpa;}
              void setScholarshipyear(string Scholarshipyear){this->Scholarshipyear =Scholarshipyear;}
             string getScholarshipyear(){return Scholarshipyear;}
              void setScholarshippercentage(float Scholarshippercentage){this->Scholarshippercentage =Scholarshippercentage;}
              float getScholarshippercentage(){return Scholarshippercentage;}

              void showScholarshipStudent(){
              showStudent();
              cout<<"Minimum CGPA Required for Scholarship:"<<Minimumcgpa<<endl;
              cout<<"Year of Getting Scholarship:"<<Scholarshipyear<<endl;
              cout<<"Percentage of Scholarship:"<<Scholarshippercentage<<endl;
              }
   };



int main(){
    Person p("Rahim",19,"Male");
    p.showPerson();
    Employee e("Sakib",38,"Male",20000,"298876","Dhaka",8,"sakib@gmail.com","2nd January","ACI Limited");
    e.showEmployee();
    Faculty f("Shishir",40,"Male",40000,"201267","Dhaka",8,"Shishir@gmail.com","1 april","Walton",9,"019XXXXXX",10);
    f.showFaculty();
    Officer o("Sajid",45,"Male",45000,"209967","Dhaka",8,"sajid@gmail.com","2nd May","Symphony",9,"0171XXXXxx",10,8);
    o.showOfficer();
    Student st("Shishir",19,"Male",0.0,"B28","20-43580-1","CSE","AIUB","SPRING 2019-20","B+");
    st.showStudent();
    ScholarshipStudent ss("Shishir",19,"Male",0.0,"B28","20-42190-1","CSE","AIUB","SPRING 2019-20","B+",3.75,"2020",10.0);
    ss.showScholarshipStudent();




return 0;
}
