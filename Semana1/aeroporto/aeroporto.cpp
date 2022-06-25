#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int m, n, maior, quantTest=0;
	
	cin >> m >>n;
	vector<int> *aeroportos = new vector<int>;
	
	
	while(m > 0)
	{
		for(int j=0 ; j<n ; j++)
		 {
			int u,v;
			cin >> u >>v;
			aeroportos[qua]++;
			aeroportos[v-1]++;
		 }
		resultado.push_back()
		quantTest++;
	}
================================================================================================================================

		maior=-1;

		for(int k =0 ; k<m ; k++)
		{
			if(aeroportos[k] > maior)
			{
				maior = aeroportos[k];
			}
		}
		
		cout <<"Teste " << //quantTest << endl;
		for(int i=0 ; i<m ; i++)
		{
			if(aeroportos[i] == maior)
			{
				cout << i+1;
				cout << " ";
			}
		}
		cout << endl << endl;
		cin >> m >>n;
	
	return 0;
}


==================================================================================================================================