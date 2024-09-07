#include <iostream>
using namespace std;

void WaterTrapped(int *height, int n)
{
    if (n < 3)
    {
        return;
    }
    int leftMax[20000], rightMax[20000];
    leftMax[0] = height[0];
    rightMax[n - 1] = height[n - 1];
    int water = 0;

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i-1]);
        rightMax[n - (i + 1)] = max(rightMax[n - i], height[n - i]);
    }

    for(int i=0;i<n;i++){
        int newWater = min(leftMax[i],rightMax[i]) - height[i];
        if(newWater>0){
            water+=newWater;
        }
    }
    cout<<"Trapped Water is = "<<water;
}

int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    WaterTrapped(height, n);
    return 0;
}