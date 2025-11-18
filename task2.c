#include<stdio.h>

#define PI3.141592654

int main(){
    const double PI=3.141592654;
    int radius=20;

    //input radius
    printf("%d\n",20);

    //calculate the surface area
    double surfaceArea=4*3.141592654*radius*radius;
    //display results
    printf("surfaceArea=%.6if\n",surfaceArea);
    return 0;
}
