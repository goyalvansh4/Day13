#include <iostream>
using namespace std;

int sum(int h) {
	return (h * (h+1) / 2);
}

int main() {
      int t;
      cin>>t;
      while(t--){
	int n;
	cin >> n;
	int h = 1;
	while(sum(h) <= n) {
		h ++;
	}
	cout << h - 1 << "\n";
      }
	return 0;
}
