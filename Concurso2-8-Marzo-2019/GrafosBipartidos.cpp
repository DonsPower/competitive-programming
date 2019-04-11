#include <bits/stdc++.h>
#define max 10000
using namespace std;
int64_t arr[max][max];
int64_t n;
int main()
{
	cin.sync_with_stdio(false);
	cin>>n;
    for (int64_t i = 0; i < n; i++) {
        for (int64_t j = 0; j < n; j++) {
            cin>> arr[i][j];
        }
    }
    int64_t suma=0,res=0;
    int64_t x=0;
    bool ban=true;
    for(x;x<n-1;x++){
        for(int64_t y=0;y<n-1;y++){
            suma+=(arr[x][y]);
            suma+=arr[x][y+1];
            suma+=arr[x+1][y+1];
			if(suma==1){
				suma+=1;
			}
			res=suma%2;
			if(res==1){
				ban=false;
			}
            suma=0;
        }
        
    }
    if(ban) cout<<"SI";
	else cout<<"NO";    
	cin.tie(NULL);     
    return 0;
}
