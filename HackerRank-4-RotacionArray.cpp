#include <bits/stdc++.h>
#define max 10000

using namespace std;
deque <int> arr;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int alo;
    for(int i=0;i<n;i++){
        cin>>alo;
        arr.push_back(alo);
    }
    int i=0;
while(i<k){
    	int al=0;
    	al=arr[i];
        arr[i] = arr[i + 1];
        arr.push_back(al);
    i++;
}    
    for(int h=0;h<n;h++){
		cout<<arr[h]<<endl;
	}
    return 0;
}
