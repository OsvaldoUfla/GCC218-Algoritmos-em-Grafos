#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int m, n, maior, quantTest=0;
	
	cin >> m >>n;
	int aeroportos[m];
	
	while(m > 0)
	{
		maior=-1;
		quantTest++;
		for(int i=0 ; i<n ; i++)
		 {
			aeroportos[i] =0;
			aeroportos[i] =0;
		 }
		
		 for(int j=0 ; j<n ; j++)
		 {
			int u,v;
			cin >> u >>v;
			aeroportos[u-1]++;
			aeroportos[v-1]++;
		 }

		for(int k =0 ; k<m ; k++)
		{
			if(aeroportos[k] > maior)
			{
				maior = aeroportos[k];
			}
		}
		
		cout <<"Teste " << quantTest << endl;
		for(int i=0 ; i<m ; i++)
		{
			if(aeroportos[i] == maior)
			{
				cout << i+1;
			}
			cout <<  " ";
		}
		cout << endl << endl;
		cin >> m >>n;
	}
	return 0;
}
