#include<iostream>
#include<string.h>
using namespace std;
class student{
    char *name;
    public:student(char *s){
        name =new char[20];
        strcpy(name,s);
    }
    void display(){
        cout<<name<<endl;
    }
    void concate(char *s){
        strcat(name,s);
    }
    student(student &ob){
        name=new char[20];
        strcpy(name,ob.name);
    }
};
int main()
{
    student stu1("Divyansh");
    stu1.display();
    student stu2(stu1);
    stu1.concate(" Chaubey");
    stu2.display();
    stu1.display();
}