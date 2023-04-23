#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main(int argc, char** argv) {
    long long e, m, b, res = 0;
    cin >> e >> m >> b;
	long long minn = min(min(e, m), b);
	res +=minn;
	e-=minn;
	m-=minn;
	b-=minn;
	minn = min(e/2,b);
	res+=minn;
	cout<<res;
    return 0;
}
