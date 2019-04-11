//**************************************************************************************************************************************
//Task                                                          Dominator
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int solution(vector<int> &A) {
  
  	stack<int>s;		
	for(int i=0;i<A.size();i++)
     {	
	    if(!s.empty())           	    
	     	{   if(A[i]!=s.top())
	            s.pop();
	           else
		        s.push(A[i]); 	
			}	 
		else
		    s.push(A[i]);	 						   
     }
	         
   int candidate=-1;			        
   int leader=-1;  
   int count=0;
   	    
		 if(!s.empty())
         candidate=s.top();
	    
	     for(auto &i:A)
	     if(i==candidate)count++;   
	     
	     if(count>A.size()/2)
	       leader=candidate; 
	     
	 if(leader!=-1) 
	        for(int i=0;i<A.size();i++)
	     	 {	if(A[i]==leader)
				     return i; 				  
	         }
	 else
	   return leader;
}
//**************************************************************************************************************************************

