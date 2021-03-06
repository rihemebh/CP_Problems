#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char** argv) {
	
	
	int t,i,j,k,s=0,n,m;
	vector<int> a ,b;
	vector<bool> o;
	
	cin>>t;
	
		for(i=0;i<t;i++){
			o.push_back(true);
		}
		
	for(i=0;i<t;i++){
		cin>>n;
		for(j=0;j<n;j++){
			cin>>k;
			a.push_back(k);
			if(j>0){
			if(a[j-1]>k){
				o[i]=false;
			}}
		}
		
		for(j=0;j<n;j++){
		cin>>k;
		b.push_back(k);
		s+=k;
		}
		
	if(o[i]==false){
			
			if((s<n)&&(s>0)){
				o[i]=true;
			}		
		}
		
		a.clear();
		b.clear();
		s=0;
	}
	
	
	
	for(i=0;i<t;i++){
		if(o[i]==true){
			cout<<"yes"<<"\n";
	}else cout<<"no \n";
	}
	
	
	return 0;
	
}
