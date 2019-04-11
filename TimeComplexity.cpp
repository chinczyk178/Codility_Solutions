//*************************************************************************************************************************************
//Task                                                 PermMissingElem
#include<iostream>
#include <algorithm>
using namespace std;
int solution(vector<int> &A) { 
    if(A.size()==0) return  1;
    
     long long int real_sum=0;
   
       for(int i=0;i<A.size();i++)
       real_sum+=A[i];
 
    int Max_element=*max_element(A.begin(),A.end());
     
   long long int sum=Max_element*(Max_element+1)/2;
              
	  if(real_sum==sum)
       return Max_element+1;
       else
       return sum-real_sum;        
}
//*************************************************************************************************************************************
//Task                                                 FrogJmp
#include<iostream>
#include<vector>
using namespace std;
int solution(int X, int Y, int D) {

       if(X==Y)return 0;
       int d=Y-X;
   
       if(d%D==0)
       return d/D;
       else
       return d/D+1;

}
//*************************************************************************************************************************************
//Task                                                TapeEquilibrium
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solution(vector<int>&A) {

    const int N=A.size();
	
	vector<int>sum;
	sum.push_back(A[0]);
	
               for(int i=1;i<N;i++)
               sum.push_back(sum[i-1]+A[i]);                    
     
	 int result=1000000000; 
     
     for(int P=1;P<N;P++)                                 
	     if(result>abs(sum[P-1]-(sum[N-1]-sum[P-1])))
	           result=abs(sum[P-1]-(sum[N-1]-sum[P-1]));

return result; 		     
}
//***********************************************************************************************************************************

