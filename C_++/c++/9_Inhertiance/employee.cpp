#include<iostream>
using namespace std;
class employee{
    private:
    string name;
    int id;
    public:
    employee (int i,string n){
        id=i;
        name=n;
    }
    int getemployeeid(){return id;}
    string getname(){return name;}

};
class fulltime:public employee
{
  private:
  int salary;
  public:
  fulltime(int idf,string naf,int sal):employee(idf,naf)
  {
    salary=sal;
  }
  int getsalary(){return salary;}
};
class parttime:public employee{
private:
int wage;
public:
parttime(int idp,string nap,int wag):employee(idp,nap)
{
    wage=wag;
}
int getwage(){return wage;}
};
int main(){
    fulltime f1(1,"jhon",58495);
    parttime f2(2,"amogh",7326598);
    cout<<"salary of "<<f1.getname()<<" is "<<f1.getsalary()<<endl;
    cout<<"daily wage "<<f2.getname()<<" is "<<f2.getwage()<<endl;
}