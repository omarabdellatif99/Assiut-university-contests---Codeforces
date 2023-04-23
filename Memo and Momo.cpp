#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	
	unsigned long long int a,b,k;
	cin>>a>>b>>k;
	if(a%k==0 && b%k==0)
		cout<<"Both";
	else if(a%k==0 && b%k!=0)
		cout<<"Memo";
	else if(a%k!=0 && b%k==0)
		cout<<"Momo";
	else if(a%k!=0 && b%k!=0)
		cout<<"No One";
	
	return 0;
}
