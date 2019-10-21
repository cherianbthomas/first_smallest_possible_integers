#include <iostream>
#include <vector>
#include <bitset>
#include <climits>

using namespace std;

int solution(const vector<int>&  numberSet)
{
  bitset<100000> resultSet;
  for(const auto idx : numberSet)
  {
    
      if(idx && idx > 0 && idx < 10^6)
      {
       // cout<<idx<<endl;
        resultSet.set(idx-1);
        
      }
    
  }
  if(!resultSet.none())
  {
    
    for(auto idx=1;idx<10;idx++)
    {
      if(!resultSet[idx])
      {
        return idx+1;
      }
    }
  }
  return 1;
}

// To execute C++, please define "int main()"
int main() {
  vector<int> test={1,2,6,4,3,2,1};
  vector<int> test1={1,2,3};
  vector<int> test2={-1,-3};
  cout<<(solution(test)==5)<<endl;
  cout<<(solution(test1)==4)<<endl;
  cout<<(solution(test2)==1)<<endl;
}
