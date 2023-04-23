#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
		long long int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a+b-c) == d)
			cout<<"YES";
		else if((a-b+c) == d)
			cout<<"YES";
		else if((a+b*c) == d)
			cout<<"YES";
		else if((a*b+c) == d)
			cout<<"YES";
		else if((a-b*c) == d)
			cout<<"YES";
		else if((a*b-c) == d)
			cout<<"YES";
		else{
			cout<<"NO";
		}
	return 0;
}
