#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        int temp = arr[i];
        if(temp>10){
            int divt = temp/10;
            int modv = temp%10;
            if(modv >=5 || modv == 0){
               for(int j = 0; j<divt; j++)
                cout<<"10 ";
                if(modv == 0){
                    cout<<endl;
                }
                else cout<<modv<<endl;
            }
            else if(modv<5){
                for(int j = 0; j<divt-1; j++)
                cout<<"10 ";
                if(modv == 4)cout<<"9 5"<<endl;
                else if(modv==3)cout<<"8 5"<<endl;
                else if(modv == 2)cout<<"7 5"<<endl;
                else if( modv == 1)cout<<"6 5"<<endl;
            }
            
            
        }
        else if(temp == 10)cout<<10<<endl;
        else if( temp <10){
            if(temp>=5)
            cout<<temp<<endl;
            else
            {
                cout<<-1<<endl;
            }
            
        }
    }

}