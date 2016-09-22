//complete me
#include <iostream>
#include <string>
#include "MyClass.h"
using namespace std;


int main()
{
 myClass myvar;

 myvar.setNum(34);
 myvar.setRoom("LR12");
 myvar.setFun(false);

 cout<<myvar.getNum()<<"  "<<endl;
 cout<<myvar.getRoom()<<"  "<<endl;
 cout<<myvar.getFun()<<"  "<<endl;
 
 return 0;
}
