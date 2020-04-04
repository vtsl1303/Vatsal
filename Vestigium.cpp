#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define int long long

using namespace std;

signed main()
{
    int vx; 
	
	cin>>vx;
    
	int vy=1;
    
	while(vx--)
    {
        int n;
        
		cin>>n;
        
		int arr[n][n];
        
		set <int>vg;
        
		int vp=0,vc=0,vsum=0;
		
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                vg.insert(arr[i][j]);
            }
			
            if(vg.size()!=n)
            {
                vp++;

            }
            vg.clear();
        }
       

	   for(int i=0;i<n;i++)
        {
            vsum+=arr[i][i];
            for(int j=0;j<n;j++)
            {
                vg.insert(arr[j][i]);
            }
            if(vg.size()!=n)
            {
                vc++;
            }
            vg.clear();

        }
      

	  cout<<"Case #"<<vy++<<":"<<" "<<vsum<<" "<<vp<<" "<<vc<<endl;
        //cout<<"\n";
    }
}