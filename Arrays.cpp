//***********************************************************************************************************************************
// Task                                                   CyclingRotation     
#include<iostream>
#include<vector> 
using namespace std;

vector<int>solution(vector<int> &A, int K) {
        
		     int N=A.size(); 
		     if(N==0)return A;
		     int i=0;
		     
		     vector<int>V;
		         if(K>=N)
		          i=K%N;
		         else
				  i=K;   
				  			  
				       
					   int iteratorFirst=N-i; 
				       
				       for(int i=iteratorFirst;i<N;i++)
				           V.push_back(A[i]);
				       for(int i=0;i<iteratorFirst;i++)
				            V.push_back(A[i]);			  				                                    		          	          
	  return V;	                 		     		 		  	             			   
}
//***********************************************************************************************************************************
// Task                                                     OddNumbers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solution(vector<int>&A){		   
		   sort(A.begin(),A.end());		   
		   const int N=A.size();
           int counter=0; 
           int result=0;    
          
		for(int i=1;i<N;i++)
		  {
		       counter++; 	
		  	      if(A[i]!=A[i-1])
		               if(counter%2!=0)       
		                  {
						    return A[i-1];	   
		                  }
		  } 
		   
		           counter=1; 		  
		             for(int i=N-1;A[i-1]==A[i];i--)
		                 counter++;
		                      if(counter%2!=0)   
	                              return A[N-1];        
		  
}

