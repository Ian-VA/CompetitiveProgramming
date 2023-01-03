#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
 
typedef long long ll;
typedef long int lint;

int main(){
	int t=1;
	std::cin>>t;
	while(t--){
		ll x,y; std::cin>>x>>y;
		
		if(x>=y){
			if((x&1)==0) std::cout<<x*x-y+1<<"\n";
			else std::cout<<(x-1)*(x-1)+y<<"\n";
		}
		else{
			if((y&1)==1) std::cout<<y*y-x+1<<"\n";
			else std::cout<<(y-1)*(y-1)+x<<"\n";
		}
	}
 
	return 0;
}

