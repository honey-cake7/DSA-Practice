#include <iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    int marks;
    Student (int r, string N, int marks) : rno(r), name(N),marks(marks){

    }
};
void change(Student *s){
    s->name = "harry";
}
int main() {
    Student *s = new Student(81,"aniket",90);
    cout<<s->marks<<endl<<s->name<<endl;
    change(s);
    cout<<s->marks<<endl<<s->name<<endl;
}
