#include <bits/stdc++.h>
using namespace std;
long long int binarySearch(vector<double>temp, long long int i, long long int f,long long int num){
	temp.push_back(num);
	sort(temp.begin(),temp.end());
	//binarisearch
	//arr, l, r, x
	//v,   i, f, num
	while (i <= f) { 
        int m = i + (f - i) / 2; 
        if (temp[m] == num) 
            return m; 
        if (temp[m] < num) 
            i = m + 1; 
        else
            f = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1;  
}
int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	long long int temp=0;
	vector<double> temporal;
	vector<double> v;
	for(long long int i=0;i<n;i++){
	long long int ent;
	cin>>ent;
	temporal.push_back(ent);
		if(i==0){
			v.push_back(ent);
		}else{
			if(temporal[i-1]!=ent) v.push_back(ent);
		}
	}
	int b;
	cin>>b;
	for(int h=0;h<b;h++){
		long long int num;
		cin>>num;
		long long int num2=v.size();
		long long int resu=binarySearch(v,0,num2,num);
		cout<<(num2-resu)+1<<endl;
	}

return 0;
}
