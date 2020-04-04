#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    
    cin>>test;
    
    int vk=1;
    
    while(test--)
	{
        string vs;
    
		cin>>vs;
        
		int vrt=0;
        
		int vx=vs[0]-'0';
        
		int vy;
        
		string va="";    
        
		// va for the answer;
        if(vx==0) va+="0";
        else{vrt=vx;while(vx--){va+="(";}va+=vs[0];}
        
		for(int i=1;i<vs.length();i++)
        {
			x=vs[i]-'0';   vy=vs[i-1]-'0';
           
            if(vx>vy)
            {
                int vz=vx-vy;  vrt+=vz;
                while(vz--) {va+="(";}
                va+=vs[i];
            }
			

            else if(vx<vy)
            {
                int vz=vy-vx;  vrt=vrt-vz;
                while(vz--) {va+=")";}
                va+=vs[i];
            }
			
            else va+=vs[i];
        }
		
        
		while(vrt--)
            va+=")";
        cout<<"Case #"<<vk++<<": "<<va<<endl;

    }
}