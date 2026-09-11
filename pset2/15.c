#include <stdio.h>

int max(int p, int q);

int main(void)
{
    int a, b, c, d;
    d = 0;
    scanf("%d%d%d", &a, &b, &c);
    if(max(max(a,b),c) == a)
    {
    	if(a < (b+c))
    	{
    		d = 1;
		}
	}
	if(max(max(a,b),c) == b)
    {
    	if(b < (a+c))
    	{
    		d = 1;
		}
	}
	if(max(max(a,b),c) == c)
    {
    	if(c < (b+a))
    	{
    		d = 1;
		}
	}
    if(d == 1)
    {
        printf("This can form a triangle\n");
        if(a == b && b == c)
        {
            printf("Equilateral\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalen\n");
        }
    }
    else
    {
        printf("Not a triangle\n");
    }
    return 0;
}

int max(int p, int q)
{
	if(p>q){
		return p;
	}
	else{
		return q;
	}
}
