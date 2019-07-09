#include <bits/stdc++.h>
using namespace std; 

vector<int> breakingRecords(vector<int> scores, vector<int> scores2) {
    int max, min, aux;
    int cont=0, cont2=0;
    vector<int> resu;
    vector<int> hig;
    vector<int> low;
    sort(scores2.begin(), scores2.end());
    min=scores2[0];
    max=scores2[scores2.size()-1];
	int auxMax, auxMin;
	//Para encontrar el mayor
	for(int i=0;i<scores.size();i++){
		if(i==0){
			auxMax=scores[i];
			hig.push_back(auxMax);
		}else{
			if(scores[i]>auxMax){
				auxMax=scores[i];	
				hig.push_back(scores[i]);
			}
		}
	}
	//Para encontrar el Menor
	for(int i=0;i<scores.size();i++){
		if(i==0){
			auxMin=scores[i];
			low.push_back(auxMin);
		}else{
			if(scores[i]<auxMin){
				auxMin=scores[i];	
				low.push_back(scores[i]);
			}
		}
	}
	
	resu.push_back(hig.size()-1);
    resu.push_back(low.size()-1);
	return resu;
}
int main(){
	int a, al;
	vector<int>scores;
	cin>>a;
	
	for(int i=0;i<a;i++){
		cin>>al;
		scores.push_back(al);
	}
	 vector<int> result = breakingRecords(scores, scores);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i]<<" ";
    }
	
	return 0;
}
