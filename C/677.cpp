#include <iostream>
#include <vector>

using namespace std;
int max( vector<long> t){
	int i, m=0;
	for(i=1;i<t.size();i++){
		if(t[i]>t[m]){
			m=i;
		}
	}
	return m;
}
int occ(vector<long> t , long x){
	int i,o=0;
	for(i=0;i<t.size();i++){
		if(t[i]==x){
			o++;
		}
	
}
	return o;
}
int main(int argc, char** argv) {
	
	int t,k , n,i,j,m; 
	bool b;
	vector<long> a ;
cin>>t;
	
	for(i=0;i<t;i++){
		cin>>n;
		b=true;
		for(j=0;j<n;j++){
			cin>>k;
			a.push_back(k);
			if(j>0){
				if(k!=a[j-1]){
					b=false;
				}
			}
		}
		if(n==1){
			cout<<1<<"\n";
		}else if(b){
			cout<<-1<<"\n";
		}else{
			
			m=max(a);
			if(occ(a,a[m])==1){
				cout<<m+1<<"\n";
			}else{
				if((a[0]==a[m])&&(a[1]<a[0])){
					
							cout<<1<<"\n";
							
				}
				 else if((a[n-1]==a[m])&&(a[n-2]<a[n-1])){
				
							cout<<n<<"\n";
					
				}
			else{
			
				for(j=1;j<n-1;j++){
					if(a[j]==a[m]){
						if(a[j+1]<a[j] || a[j-1]<a[j]){
							cout<<j+1<<"\n";
							break;
						}}
					}
				}
				
					
			}
		}
			
			
		a.clear();
	
	}
	return 0; 
}
