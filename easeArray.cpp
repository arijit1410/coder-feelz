#include<iostream>
#include<vector>

using namespace std;
int main(){
int test;
cin>>test;

while(test--){
	int n,i=0;
	cin>>n;

	vector<int> numArray(n), ans;

	for(int i=0;i<n;i++){
		cin>>numArray[i];
	}

	while(i<n){
		if(numArray[i]!=0){
			if(i<n){
				if(numArray[i]==numArray[i+1]){
					ans.push_back(2*numArray[i]);
					i++;
				}
			else{
				ans.push_back(numArray[i]);
			}

		}
		else{ ans.push_back(numArray[i]);
	}
}
i++;
}

while(ans.size()<=n){
	ans.push_back(0);

}

for(int i=0;i<n;i++){
	cout<<ans[i]<<" ";
}

cout<< endl;
}
return 0;

}
	


