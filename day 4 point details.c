#include <stdio.h>
struct point
{
    
    float x;
    float y;
};
int main()
{
    struct point s;
    
 printf("Enter The Information of rectangle :\n\n");
    
 printf("Enter x. : ");
    scanf("%d",&s.x);
    
    printf("Enter y : ");
    scanf("%f",&s.y);
    
    printf("\nDisplaying Information\n");
    
    printf("width: %d\n",s.x);
    printf("Marks: %.2f\n",s.y);
    return 0;
}
