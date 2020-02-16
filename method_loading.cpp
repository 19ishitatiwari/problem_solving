#include <iostream>
#include <conio.h>

class student{
	int roll=0;
	float froll=0;
	
	public:
		void setValue(int x){
			roll=x;
		}
		
		void setValue(float x){
			froll=x;
		}
		
		void show(){
			std::cout<<roll<<"\n";
			std::cout<<froll<<"\n";
		}
};

//execution will start from here**
using namespace std;

int main(){
	student s1,s2;
	s1.setValue(5);
	s1.show();
	
	float a = 10.10;
	// method overloading
	s2.setValue(a);
	s2.show();
	
	getch();

	return 0;
}
