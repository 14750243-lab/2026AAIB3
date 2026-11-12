//week10-2.cpp SOIT_Advance_002
#include <iostream>
using namespace std;
int  isprime(int N){
	//除了1跟N本身, 都不整除
	for (int i=2; i<N; i++) {
		if (N%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for(int i=a; i<=b; i++){
		if(isprime(i)) ans++;
	}
	cout << ans << "\n";

}
