//                             In the name of Allah 
 
 
/*                     Don't give up until the last second.
                                            Practice makes a man perfect
                       pain is temporary pride is forever
*/
 
 
//===================================================================================================================//
#include<bits/stdc++.h>                                                                                              //                                                                                   
using namespace std;                                                                                                 //
typedef long long ll;                                                                                                //
typedef unsigned long long ul;                                                                                       //                                         //
#define Clock            clock_t tStart = clock()                                                                    //
#define FastIO           ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)                            //
#define Freopen          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)                        //
#define Runtime          fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC)     //
#define pi acos(-1)                                                                                                  //

//...........<<<<<<<<<<end>>>>>>>>>>>...............

int lol(vector<int>& candies, int temp)
{
    long long cnt=0;
    for(int i=0;i<candies.size();i++)
    {
        cnt+=candies[i]/temp;
    }
  
    return cnt;
}

int maximumCandies(vector<int>& candies, long long k) {
        
    sort(candies.begin(),candies.end());

  long long left=1,right=1e12+4,mid,ans=0;
  
  while(left<=right)
      {
          mid=(left+right)/2;

          long long res=lol(candies,mid);

          if(res>=k)
          {
             left=mid+1;
             ans=mid;
          } 
          else right=mid-1; 

      }

  return ans;

            
}

void Main()
{
    vector<int>nums={5,2};
    int m=11;
    cout<<maximumCandies(nums,m);


    
}
 
int main()
{
 
    FastIO;
 
#ifndef ONLINE_JUDGE
    Clock;
    Freopen;
#endif
//......................mainfunction...............
 
 
    //sieve();
  //test{Main();}
    Main();
 
 
 
 
//....................end_the mainfunction.......
#ifndef ONLINE_JUDGE
    Runtime;
#endif
 
}