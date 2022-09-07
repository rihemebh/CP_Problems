#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	
	int s,m,i;
	string max="",min="";
	cin>>m>>s;
	int m1=m;
	
	if(s==0){
		if(m==1){
			cout<<"0 0";
			
		}else{
			cout<<"-1 -1";
		}
	}else if((m==0)||(9*m<s)){
		cout<<"-1 -1";
	}else{
		
		while(s>=10){
			s-=9;
			max.push_back('9');
			m--;
		}
		if(s<10)
			max.push_back('0'+s);
			m--;
			while(m>0){
				max.push_back('0');
					m--;
			}
			
			if(max[m1-1]=='0'){
				min.push_back('1');
				m1--;
			
			
				while((max[m1-1]=='0')){
		
					min.push_back(max[m1-1]);
					m1--;
			
			}
			min.push_back(max[m1-1]-1);
			m1--;
		}
			for(i=m1-1;i>=0;i--){
				min.push_back(max[i]);
			}
		}
	
		cout<<min<<" "<<max;
	
	
	return 0;
}
