#include<iostream>
#include<vector>

using namespace std;

int main(){
int test;
cin>>test;


while(test--){
	int n,i=0;
	cin>>n;
	int zeros=0;

	vector<int> numArray;

	

	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(val==0) zeros++;
		else numArray.push_back(val);

	}

	while(i<numArray.size()-1){
				
				if(numArray[i]==numArray[i+1]){
					numArray[i]=2*numArray[i];
					numArray.erase(numArray.begin()+i+1);
					zeros++;
					
					
				}
				else{
					i++;
			}

		
		
}


for (int k=0;k<numArray.size();k++){
	cout<<numArray[k]<< " ";
}
while(zeros-->0) cout<<"0 ";

cout<< endl;
}
return 0;
}

	


