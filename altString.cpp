#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
int i,j;
int t;
cin>>t;
char a[10000];
int count=0;
while(t--){
	
	 
	cin>>a;
	for(i=0;i<strlen(a);i++){
		if(int(a[i])==123)// converting it into a special character
			continue;

		for(j=i;j<strlen(a);j++){
			if(int(a[i])==int(a[j]) || (int(a[i])-int(a[j]))==32 || (int(a[i])-int(a[j]))==-32){
				count++;
				if((count%2)==0){
					a[j]==123;
					break;
				}
			}
		}
		count=0;	

	}

	for(i=0;i<strlen(a);i++){
		if(a[i]!=123)
			cout<<a[i];
	}
		cout<<endl;
		count=0;
	
}
}	

			


