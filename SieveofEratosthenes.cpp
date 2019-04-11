//**************************************************************************************************************************************
//Task                                                         CountNonDivisible
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> solution(vector<int> &A) {
    
    vector<int>::iterator It;
	It=max_element(A.begin(),A.end());
    int last=*It;

    last++;
    int N=A.size();

   vector<int>Y;
   vector<int>X;
   Y.assign(last,0);
   X.assign(last,0);
   
    for(int i=0;i<A.size();i++)
   {
	X[A[i]]++;
    Y[A[i]]=N;	
   }
         
     for(int i=0;i<X.size();i++)        
             if(X[i]!=0)
               for(int j=i;j<Y.size();j+=i)
                   if(Y[j]!=0)
			             Y[j]-=X[i];
     
vector<int>C;
	      for(int i=0;i<A.size();i++)
              {
			      C.push_back(Y[A[i]]);
              }      
                     
	return C;	
} 
//**************************************************************************************************************************************
//Task                                                         CountSemiprimes
#include<iostream>
#include<vector>
using namespace std;
vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
	
vector<int>C;
int A[N+1]={0};
int Count[N+1]={0};
     
	    int i=2;
		int k=0;
		     while(i*i<=N)                                                                   
             {           
   	             if(A[i]==0)                       
		           {
					 k=i*i;
					while(k<=N)                            
		              {	
						A[k]=i;			   	
					   	k+=i;		         
		              }
				   }
   	         i++;
             }                   
   
   
   int counter=0;
  
  for(int i=1;i<=N;i++)
  {	
  	if(A[i]!=0&&A[i/A[i]]==0)
  	counter++;	
  	Count[i]=counter;
  }
   
  for(int j=0;j<P.size();j++)
   {
  C.push_back(Count[Q[j]]-Count[P[j]-1]);				   	      
   }
   
return C;
}
//**************************************************************************************************************************************

