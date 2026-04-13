#include<stdio.h>
#include<string.h>
int main()
{
    int height[9]={1,8,6,2,5,4,8,3,7};
    int i=0;
    int j=8;
    int maxArea=0;
    while(i<j)
    {
        int h;
        if (height[i]<height[j])
        {
            h=height[i]; 
        }
        else
        {
            h=height[j];
        }
        int w=j-i;
        int area=h*w;
        if(area>maxArea)
        {
            maxArea=area;
        }
        if(height[i]<height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    printf("%d",maxArea);

}