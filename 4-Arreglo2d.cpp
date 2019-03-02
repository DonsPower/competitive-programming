#include <bits/stdc++.h>

using namespace std;
int arr[6][6];
int main()
{
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin>> arr[i][j];
        }
    }
    double suma=0;
    double res=-99990;
    int x=0;
    for(x;x<4;x++){
        for(int y=0;y<4;y++){
            suma+=(arr[x][y]);
            suma+=arr[x][y+1];
            suma+=arr[x][y+2];
            suma+=arr[x+1][y+1];
            suma+=arr[x+2][y];
            suma+=arr[x+2][y+1];
            suma+=arr[x+2][y+2];
            
            if(suma>res){
                res=suma;
            }
            suma=0;
        }
        
    }
    cout<<res;
         
  
    
    return 0;
}


