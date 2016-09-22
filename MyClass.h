#include <string>
using namespace std;
class myClass
   {
     private:
	int num; 
	string room;
	bool fun;

     public: //methods
	void setNum(int);
	int getNum();
	void setRoom(string);
	string getRoom();
	void setFun(bool);
	bool getFun();
};
