#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
 
	double num1,num2,num3;
	cin>>num1>>num2>>num3;
	double result = (num1*num2)/num3;
	long long number = result;
	double ress = result - number;
	if(ress > 0){
		cout<<"double";
	}else if(number <= 2147483647){
		cout<<"int";
	}else{
		cout<<"long long";
	}
}
	
 
