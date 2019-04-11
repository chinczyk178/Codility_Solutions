//**************************************************************************************************************************************
//Task                                                         Brackets
#include<string>
#include<iostream> 
#include<stack>
int solution(string &S) {
 
	stack<char>s;
		
     for(int i=0;i<S.size();i++)
	{
	 if(s.empty()) 
	   {
		 s.push(S[i]);
	   }
    
	 else
	   
	   {
		   if(s.top()==S[i]-2||s.top()==S[i]-1)    
     	   {
		     s.pop();			 	      
		   }	
		  else
	        s.push(S[i]);	
       }	 
	  }
  
 return s.empty();
  
}
//**************************************************************************************************************************************
//Task                                                         Fish
#include<iostream>
#include<stack>
#include<vector> 
int solution(vector<int> &A, vector<int> &B) {
    
	stack<int>s; 
	int count=0;        
		         
	for(int i=0;i<A.size();i++)
	{
		if(B[i]==0&&s.empty()!=1)
		      {
		           while(!s.empty())
				    {
				    	if(s.top()>A[i])  {count++;break;} 	
				    	else              {count++;s.pop();}										    	
					}
			  }		      
	    else if(B[i]==1)
		  s.push(A[i]);		
	}
return A.size()-count;
}
//**************************************************************************************************************************************
//Task                                                          Nesting
#include<string>
#include<iostream> 
#include<stack>
int solution(string &S) {
 
	  stack<char>s;
		
     for(int i=0;i<S.size();i++)
	{
	 if(s.empty()) 
	   {
		 s.push(S[i]);
	   }
    
	 else
	   
	   {
		   if(s.top()==S[i]-1)    
     	   {
		     s.pop();			 	      
		   }	
		  else
	        s.push(S[i]);	
       }	 
	  }
    return s.empty(); 
}
//**************************************************************************************************************************************
//Task                                                          StoneWall
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int solution(vector<int> &H) {
              stack<int>s;
              s.push(H[0]);
     
             int n=1; 
	        for(int i=1;i<H.size();i++)
	       {
	             if(H[i]>s.top())		
				  {s.push(H[i]);
				  n++;
				  }  
				     
				 else if(H[i]==s.top())	 
				  continue; 	 					   		       	    
	       	     else 
	       	      {
	       	      	s.pop();
	       	      	       
	       	      	       while(s.empty()!=1&&H[i]<s.top())
					         s.pop();
					         
					        n++;
					        
					        if(s.empty()!=1&&s.top()==H[i])   
					         {n--; }
					s.push(H[i]);				       	   
	       	       }       	
		   }	
return n; 
}
//******************************************************************************************************************************************



