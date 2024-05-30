#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    cout << vec1.size() << "\n";
    // vector<int> vec3(10,-1);
    // cout<< vec3.size()<<"\n";
    // cout<< vec3[0]<<"\n";

    vector<int> vec2 = {1, 2, 3, 4};
    cout << vec2.size() << " = Size\n";
    cout << vec2.capacity() << " = Capacity\n";
    
    vec2.push_back(5);

    cout << vec2.size() << " = Size\n";
    cout << vec2.capacity() << " = Capacity\n";

    vec2.pop_back();

    cout << vec2.size() << " = Size\n";
    cout << vec2.capacity() << " = Capacity\n";

    return 0;
}