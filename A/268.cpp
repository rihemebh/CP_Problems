#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	
	int n , p , q , i , j=0, k=0;
	vector<int> an , aq ,ap;
	cin>>n;
	
	for(i=0;i<n;i++){
	an.push_back(0);
	}
	
	cin>>p;

	for(i=0;i<p;i++){
	cin>>j;
	ap.push_back(j);
	an[ap[i]-1]++;

	}

	cin>>q;

	
	for(i=0;i<q;i++){
	cin>>j;
	aq.push_back(j);
	an[aq[i]-1]++;
	
	}

	for(i=0;i<n;i++){
	if (an[i]==0){
		cout<<"Oh, my keyboard!";
		return 0;
	}
	}

		cout<<"I become the guy.";
		
	
	/*
	10
5 8 6 1 5 4
6 1 3 2 9 4 6
	*/
	

	return 0;
}
