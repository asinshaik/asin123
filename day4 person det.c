#include <stdio.h>
struct song
{
    char title[50];
    char artist;
    char album;
    int year;
    
};
int main()
{
    struct song s;
    
 printf("Enter The Information of Students :\n\n");
    
 printf("Enter title : ");
    scanf("%s",s.title);
    
 printf("Enter artist. : ");
    scanf("%d",&s.artist);
    
    printf("Enter album : ");
    scanf("%f",&s.album);
     
     printf("Enter year");
     scanf("%d" ,&s.year);
     
    printf("\nDisplaying Information\n");
    
 printf("title: %s\n",s.title);
    printf("artist: %d\n",s.artist);
    printf("album: %.2f\n",s.album);
    printf("year: %d . 2f\n",s. year);
    return 0;
}

