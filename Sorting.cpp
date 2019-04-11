//**************************************************************************************************************************************
//Task                                                      Distinct
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int solution(vector<int> &A) {

	    if(A.size()==0) return 0; 
	    sort(A.begin(),A.end());

	     int count=1;
	  
	    for(int i=0;i<A.size()-1;i++)
	        if(A[i]!=A[i+1])
	          count++;
	      
return count;
}
//**************************************************************************************************************************************
//Task                                                        Triangle
#include <algorithm>
#include<iostream>
#include<vector>

int solution(vector<int> &A) {
	       	        
            if(A.size()<3)return 0; 
            
	        sort(A.begin(),A.end());
	               
             for(int i=1;i<A.size()-1;i++)   
               {
                   if( (long int)A[i]+A[i+1]>A[i-1]&&
					   (long int)A[i]+A[i-1]>A[i+1]&&
	                   (long int)A[i+1]+A[i-1]>A[i]				     
				      ) 
					  return 1;     	
			   }
return 0 ;
}
//**************************************************************************************************************************************
//Task                                                     MaxProductOfThree
#include <algorithm>
#include<iostream>
#include<vector>

int solution(vector<int> &A) {

int N=A.size();    
sort(A.begin(),A.end());


if(A[0]*A[1]*A[N-1]>A[N-1]*A[N-2]*A[N-3])
     return A[0]*A[1]*A[N-1];
else
     return A[N-1]*A[N-2]*A[N-3] ;  
}
//**************************************************************************************************************************************





