#include <stdio.h>
#include <math.h>

int ValidTriangle(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Valid Triangle: No\nMessage: Side lengths must be positive numbers.\n\n");
        return 0;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Valid Triangle: No\nMessage: The given lengths do not form a valid triangle.\n\n");
        return 0;
    }
}

float Area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    float a,b,c;
    printf("Enter side a: ");
    scanf("%f",&a);

    printf("Enter side b: ");
    scanf("%f",&b);

    printf("Enter side c: ");
    scanf("%f",&c);
    if(ValidTriangle(a,b,c))
    {
        float area = Area(a, b, c);
        printf("Valid Triangle: Yes\n");
        printf("Area: %.2f\n\n", area);
    }
    printf("Name: Keya Thakkar\n");
    printf("ID: 25CE122");
    return 0;
}
