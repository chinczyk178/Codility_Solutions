//**************************************************************************************************************************************
//Task                                                PermCheck
#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &A) {

             const int N=A.size();
             
			 vector<int>V(N+1,0);
		       		      
        for(int i=0;i<N;i++)              
            {if(A[i]>N)return false;
            V[A[i]]++;                             
            }

  for(int i=1;i<V.size();i++)
     if(V[i]!=1)
         return false;

return true; 
}
//**************************************************************************************************************************************
//Task                                           FrogRiverOne
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(int X, vector<int> &A) {
    
             const int N=A.size();         		 
			 vector<int>V(X+1,0);	
			 int SumX=(X+1)*X/2;
	          int sum=0; 	
			 		 		 	   		   			     		   	      
          for(int i=0;i<N;i++)              
            {
            	 if(V[A[i]]==0) sum+=A[i];
                 V[A[i]]++;         		
				 if(sum==SumX) 
				 return i;  	       
            }      	              
return -1;     
}
//**************************************************************************************************************************************
//Task                                               MaxCounters
#include<iostream>
#include<vector>
using namespace std;
vector<int> solution(int N, vector<int> &A) {
 	vector<int>tab(N,0);
	   
	   int max=0; 
	   int Max=0;  
	   
		   for(auto &i:A)
	       {
	       	      if(i>N) Max=max; 
	       	     
	       	            else{
				            
							 if(tab[i-1]<Max)
				              tab[i-1]=Max;
				  
				              tab[i-1]++;
				 
				              if(tab[i-1]>max)max=tab[i-1];   			                    
		                    }		                    
		   }
	  for(auto &i:tab)
	     if(i<Max)
	        i=Max;
	        
return tab; 	        
}
//***********************************************************************************************************************************
//Task                                              MissingInteger
#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &A) {
 
     const int N=1000000;
     int Count[N+1]={0} ;  
     
	for(auto &i:A)
        if(i>0)
          Count[i]++;
       
	 for(int i=1;i<=N;i++)
	    if(Count[i]==0)
	        return i;
 
return N+1;
}
//***********************************************************************************************************************************

