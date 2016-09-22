#include "MyClass.h"
#include <string> 
using namespace std;
void myClass::setNum (int x)
{
	num=x;
}

int myClass::getNum()
{
	return num;
}

void myClass::setRoom(string name)
{
	room=name;
}

string myClass::getRoom()
{
 	return room;
}

void myClass::setFun(bool truth)
{
	fun=truth;
}

bool myClass::getFun()
{
	return fun;
}
