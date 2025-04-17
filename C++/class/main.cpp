#include <iostream>
#include <string>

using namespace std;
class Student{
private:
    string Name;
    int Rollno;
    string Department;

public:
    void setName(string name){
        Name = name;
    }
    string getName (){
        return Name;
    }
    int setRollno(int rollno){
        Rollno = rollno;
    }
    int getRollno (){
        return Rollno;
    }
    void setDepartment(string department){
        Department = department;
    }
    string getDepartment (){
        return Department;
    }

    void StudentsRecored(){
        cout <<"Name -"<<Name<<endl;
        cout <<"Rollno -"<<Rollno<<endl;
        cout <<"Department -"<<Department<<endl;

    }
    Student(string name,int rollno,string department){
        Name = name;
        Rollno = rollno;
        Department = department;
    }
} ;

int main()
{
    Student student1 = Student("Imran",20,"computer science");
    student1.StudentsRecored();
    student1.setDepartment("Physics");
    cout <<getName()<<"is in "<<getDepartment()<<"department \n";

    return 0;
}
