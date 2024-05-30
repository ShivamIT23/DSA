#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{
    int st = 0, ed = vec.size() - 1;
    int currSum = 0;
    vector<int> res;

    while (st<ed)
    {
        currSum = vec[st] + vec[ed];
        if(currSum == target){
            res.push_back(st);
            res.push_back(ed);
            return res;
        }
        else if(currSum > target){
            ed--;
        }else {
            st++;
        }
    }
    return res;
    
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = pairSum(vec, target);
    cout<<res[0] << " , " << res[1];
    return 0;
}