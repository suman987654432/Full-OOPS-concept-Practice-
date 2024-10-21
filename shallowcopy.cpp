#include <iostream>
#include <string.h>
using namespace std;
class student{
    char *name;
    public:student(char *s){
        name= new char[20];
        strcpy(name,s);
    }
    void display(){
        cout<<"name="<<name;
    }
};
int main() {
 student obj;
 student obj2(obj);
 obj.display();  //shallow copy
 obj2.display();
}
// deep copy 


#include<iostream>
#include<string.h>
using namespace std;
class student
{
char *name;
public:student(char *s)
{
name=new char[20];
strcpy(name,s);
}
student(student &ob)//deep copy
{
name=new char[20];
strcpy(name,ob.name);
}
void display()
{
cout<<"name="<<name<<"\n";
}
void concat(char *s)
{
strcat(name,s);
}
};
int main()
{
student obj1("amit");
student obj2(obj1);
obj1.display();//amit
obj2.display();//amit
obj2.concat("verma");
cout<<"obj1 update=";
obj1.display();
cout<<"obj2 update=";
obj2.display();
}