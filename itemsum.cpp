#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main(){
	int test;
	cin>>test;
	int i=0;
	int j=0;
	

	while(test--){
		int m,n;
		vector<int> a,b,sum;
		cin>>m>>n;
		for(i=0;i<m-1;i++) cin>>a[i];
		for(i=0;i<n-1;i++) cin>>b[i];
		int p;
		cin>>p; // taking all inputs

		//calculating the sums

		for(i=0;i<m-1;i++){
			for(j=0;j<n-1;j++){
				int s;
				s=a[j]+b[i];
				sum.push_back(s);
			}
		
		}

		sort(sum.begin(),sum.end());
		unordered_set<int> st(sum.begin(),sum.end());//converting to set to remove duplicates
		sum.assign(st.begin(),st.end());

		if(p<sum.size()){
		cout<< sum[p];}
		else
			cout<< -1;


 		
	}


}