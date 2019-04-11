
//***********************************************************************
//                            Binary Gap 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
     for(int i=N;i>0;i/=2)                              
    {
		bin.push_back(i%2);                        	
	}	
		
    int counter=-100000; 
    int maxCounter=-100000; 
    
	for(int i=0;i<bin.size();i++)
	{ 
	     if(bin[i]^1==1)                               
	        {
	          counter++;
			}
		 else
		    {
		     maxCounter=max(maxCounter,counter);
		     counter=0; 
			}			
	}	
	if           (maxCounter<0)  return  0; 
	else                         return  maxCounter; 
        	 
}
