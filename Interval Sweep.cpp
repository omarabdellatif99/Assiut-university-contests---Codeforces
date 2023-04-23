#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
		int a,b;
		cin>>a>>b;
		if(a==0 && b==0)
			cout<<"NO";
		else if(a-b == 1 || a-b == -1 || a-b == 0)
			cout<<"YES";
		else{
			cout<<"NO";
		}
	return 0;
}
