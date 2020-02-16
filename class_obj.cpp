#include <iostream>
#include <conio.h>

class student{
	int roll;
	
	public:
		void setValue(int x){
			roll=x;
		}
		
		int show(){
			return roll;
		}
};

//execution will start from here**
using namespace std;

int main(){
	student s1;
	s1.setValue(5);
	cout<<s1.show();
	
	getch();
}
