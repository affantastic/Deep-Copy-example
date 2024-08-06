#include <iostream>
using namespace std;
class Student{
private:
    string name;
    int* agePtr;
public:
    Student(){
        agePtr=NULL;
    }
    Student(string name, int* agePtr){
        this->name=name;
        this->agePtr=new int;
    }
    void display(){
        cout<<name<<endl;
        cout<<agePtr<<endl;
    }
    Student(Student &obj){
        this->name=name;
        this->agePtr=obj.agePtr;
        *(this->agePtr)=*(obj.agePtr);
        cout<<"Copy Constructor Called"<<endl;

    }
    ~Student(){
    cout<<"Destructor called"<<endl;}
};
main(){
    Student ob1("Affan",NULL);
    Student ob2;
    ob1.display();
    ob2=ob1;
    ob2.display();
    }
