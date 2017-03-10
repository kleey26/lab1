#include<iostream>
using namespace std;

int main(void)
{
	int i;
	cin >> i;
	while(i != 1){
		if(i % 2 == 1){
			i = 3 * i + 1;
		}
		else{
			i = i / 2;
		}
		cout<<i<<"\n";
	}
	return 0;
}
