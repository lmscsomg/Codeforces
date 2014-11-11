#include <iostream>
using namespace std;

int A[100][100];
int B[100][100];

int main()
{
    int m,n;
	cin>>m>>n;

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			A[i][j]=1;

    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>B[i][j];
			if(B[i][j]==0){
				for(int k=0;k<n;k++)
					A[i][k]=0;
				for(int k=0;k<m;k++)
					A[k][j]=0;
			}
        }
    }

    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(B[i][j]==1){
                   bool flag = false;
                   for(int k=0;k<n;k++){
                        if(A[i][k]==1){
                            flag = true;
                            break;
                        }
                   }
                   for(int k=0;k<m && !flag;k++){
                        if(A[k][j]==1){
                            flag = true;
                            break;
                        }
                   }
					
				if(!flag){
					cout<<"NO"<<endl;
					return 0;
				}
            }
        }
    }

	cout<<"YES"<<endl;

	for(int i=0;i<m;i++,cout<<"\n")
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
	return 0;
}