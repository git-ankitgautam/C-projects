#include <stdio.h>

int equalstacks(int *st1, int *st2, int *st3, int n1, int n2, int n3)
{
    int i,a=0,b=0,c=0,s1=0,s2=0,s3=0;
    //following loops will find the height of stacks by adding size of cylinders
    for(i=0;i<n1;i++)
    {
        s1+=st1[i];
    }

    for(i=0;i<n2;i++)
    {
        s2+=st2[i];
    }
    
    for(i=0;i<n3;i++)
    {
        s3+=st3[i];
    }

    while(1) //this loop will pop cylineders from the stack accordingly
    {
        if((s1==s2 && s2==s3) || s1==0 || s2==0 || s3==0)
            break;
        if(s1>=s2 && s1>=s3)
            s1-=st1[a++];
        else if(s2>=s1 && s2>=s3)
            s2-=st2[b++];
        else
            s3-=st3[c++];
    }

    if(s1==0 || s2==0 || s3==0) //for when the modified height of all stacks reaches 0 
        return 0;
    else
        return s1;

}

int main() {
    int n1,n2,n3,i,s1=0,s2=0,s3=0,height;
    printf("Enter the number of cylinders in stacks one by one:-");
    scanf("%d %d %d",&n1,&n2,&n3);
    int h1[n1];
    int h2[n2];
    int h3[n3];
    printf("Enter the size of cylinders in stacks 1:-");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&h1[i]);
    }
    printf("Enter the size of cylinders in stack 2:-");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&h2[i]);
    }
    printf("Enter the size of cylinders in stack 3:-");
    for(i=0;i<n3;i++)
    {
        scanf("%d",&h3[i]);
    }

    height = equalstacks(h1,h2,h3,n1,n2,n3);
    printf("the maximum equalized height for the stacks wil be:- %d",height);
    return 0;
}