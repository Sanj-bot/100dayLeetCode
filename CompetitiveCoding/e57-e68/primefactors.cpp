
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> prime_factors;
	for(int i=2;i<=n;++i){
		while(n%i==0){
			prime_factors.push_back(i);
			n/=i;
		}
	}	
	for(int prime:prime_factors){
		cout<<prime<<" ";
	}
	return 0;
}