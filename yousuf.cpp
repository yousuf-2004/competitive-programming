#include <bits/stdc++.h>
using namespace std;
const int maxN=1e6+5;
int is_prime[maxN];
void sieve(){
    int maxN=1e6;
    for(int i=1;i<maxN;i++){
        is_prime[i]=1;
    }
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i*i<maxN;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=maxN;j+=i){
                is_prime[j]=0;
            }
        }
    }

}


int main() {
	// your code goes here
	sieve();
	
	
	int n;
	cin>>n;
	
	vector<int>a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	int g=a[0];
	for(int i=1;i<n;i++){
	    g=__gcd(g,a[i]);
	}
	bool found=false;
	for (int p = 2; p < maxN; p++) {
        if (is_prime[p] && g % p != 0) {
            cout << p << '\n';
            found = true;
            break;
        }
    }
	
	if(found==false){
	    cout<<-1<<'\n';
	}
}
