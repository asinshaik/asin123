#include <stdio.h>
struct rectangle
{
    
    float width;
    float height;
};
int main()
{
    struct rectangle s;
    
 printf("Enter The Information of rectangle :\n\n");
    
 printf("Enter width. : ");
    scanf("%d",&s.width);
    
    printf("Enter height : ");
    scanf("%f",&s.height);
    
    printf("\nDisplaying Information\n");
    
    printf("width: %d\n",s.width);
    printf("Marks: %.2f\n",s.height);
    return 0;
}
