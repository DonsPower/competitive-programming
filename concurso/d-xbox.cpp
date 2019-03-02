#include <bits/stdc++.h>
using namespace std;

void kadane(vector<int>& vet)
{
	int max_atual = 0, max_total = -1;
	int size_vet = vet.size();

	for(int i = 0; i < size_vet; i++)
	{
		max_atual = max_atual + vet[i];
		
		if(max_atual < 0)
			max_atual = 0;
		if(max_atual > max_total)
			max_total = max_atual;
	}
	
	cout << max_total << endl;
}

int main(int argc, char *argv[])
{
	int k;
	int numc;
	vector<int> vet(numc);
	cin>>numc;
	for(int i=0;i<numc;i++){
	cin >> k;
    	vet.push_back(k);
	}
	kadane(vet);

	return 0;
}

