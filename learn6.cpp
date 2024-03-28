#include<iostream>
#include<iomanip>
using namespace std ;
int main(){
	float a,b;
	cin >> a >> b;
	cout << " a / b =" << setprecision(2) << fixed << a / b;
	return 0;
}