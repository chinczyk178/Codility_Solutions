//**************************************************************************************************************************************
//Task                                                   CountFactors
#include <math.h>
#include<iostream>
int solution(int N) {

	int count=0; 
	int x=sqrt(N);
	
	     for(int i=1;i<=x;i++)
	      {
		  if(N%i==0)
		   count++;
	      }
	    	    
	count*=2;
	if(x*x==N)
	count--;		
 return count;
}
//**************************************************************************************************************************************
//Task                                                    Flags
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool check(int s,vector<int>&P)
{
    int counter=1;
    int j=0;

           counter=1;
           j=0;
                    
                    for(int i=1;i<P.size();i++)   
                       
                       	if(P[i]-P[j]>=s)
                       	{counter++,j=i;	}                						   
					   
					  
					   
       if(counter>=s)
	   return true;  
	   else
	   return false;
}

int solution(vector<int>&A) {
	vector<int>P;
	const int n=A.size();
	for(int i=1;i<n-1;i++)
    {
	          if(A[i-1]<A[i]&&A[i]>A[i+1])
	          P.push_back(i);	
	}
	
	if(P.size()==0)return 0;
	
      int s=sqrt(n)+1;
      
      while(s>0)
 {
    if(check(s,P)==true)return s;
 	s--;
 }	 	
}
//**************************************************************************************************************************************
//Task                                                   MinPerimeterRectangle
#include<iostream>

int solution(int N) {
		 int i=1;
	     int x=1;
	     
	     while(i*i<=N)
	     {
	       if(N%i==0)x=i;	
	     	i++;
		 }
	return (N/x+x)*2; 
}
//**************************************************************************************************************************************
//Task                                                    Peeks
#include<iostream>
#include<vector>
#include<math.h>
using namespace std
;
bool check(int s,int N,vector<int>&P)
{ 
           int counter=0;
           int x=0;
                    
                    for(int i=0;i<P.size();i++)   
                       {
                       	if(P[i]>=x+s)
                       	break;
                       	else if (P[i]>=x&&P[i]<x+s)
                       	{counter++;x+=s;}
					   }
                       	
	if(N/s==counter)
	return true;
	else
	return false;					   					      
}
int solution(vector<int>&A) {
	vector<int>P;
	const int n=A.size();
	for(int i=1;i<n-1;i++)
    {
	          if(A[i-1]<A[i]&&A[i]>A[i+1])
	          P.push_back(i);	
	}
   if(P.size()==0)return 0;
      int s=3;
      
                 while(s<=n)
                 {
                 if(n%s==0)	
                 if(check(s,n,P)==true)
	             {
			      return  n/s;
 	             }
				  s++;
                 }
}
//********************************************************************************************


