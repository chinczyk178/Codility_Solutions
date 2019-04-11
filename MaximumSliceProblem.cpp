//**************************************************************************************************************************************
//Task                                                           MaxProfit
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solution(vector<int> &A) {
	if(!A.size()) return 0;

	int diference=0;
	int maxDiference=0;
	int min=A[0];    
		 for(int i=0;i<A.size();i++)
	      {  	         
		     diference=A[i]-min;
	      	   if(diference>=0)
	            maxDiference=max(diference,maxDiference);
		       else
		        min=A[i];		  	      
		  }
		  
return maxDiference;

}
//**************************************************************************************************************************************
//Task                                                           MaxSliceSum
#include <algorithm>
#include<iostream>
#include<vector>
int solution(vector<int> &A) {
  	
	 bool x=0;
	 for(auto &i:A)
	 if (i>=0)x=1;
	  
	  if(!x)return *max_element(A.begin(),A.end());
	
	 int sum=0; 
	 int Maxsum=A[0];     	      
		  
		  for(int i=0;i<A.size();i++)
	      {
			    sum+=A[i];			    
	            sum=max(0,sum);
	            
	            Maxsum=max(Maxsum,sum);
	      } 
 return Maxsum; 
}
//**************************************************************************************************************************************





