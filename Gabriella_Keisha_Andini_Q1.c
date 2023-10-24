/* NT01012 Procedural Programming */
/* Programming Assignment 2       */
/*                                */
/* Question Number: 1             */
/* Name: Gabriella Keisha Andini  */
/* Date: 27.10.2022               */

#include <stdio.h> /*include is a directive*/
#include <math.h>  /*new directive math.h for mathematical calculation*/

int main ()
{
    int i, n, j=1;  /*integer variable needed*/
	float x, sum = 0; /*float variable for x and initialise summation*/

	/*valid x only for -1<x<1*/
	printf ("The series only valid for -1<x<1.\n");

	/*input the x and number of terms that want to be request*/
	printf ("Enter value of x to evaluate : ");
	scanf ("%f", &x);
	printf ("Enter number of terms of Maclaurin series : ");
	scanf ("%d", &n);

	/*if the value of x not -1<x<1, then it is invalid*/
	if (x < -1 || x > 1)
	{
		printf("Sorry, the  value of x is not valid for this series. Please input valid value. \n");
	}
    /*value of x that -1<x<1 is calculated*/
    else
		{
        /*result  of the calculation using Maclaurins Series */
        for (i=1;i<=n;i++)
        {
        /*running sum with update term*/
		if (j == 1)
            {
            sum+=pow(x,i)/i;
            j = 0;
            }
        else
            {
            sum-=pow(x,i)/i;
            j = 1;
            }
        }
        /*printf sum*/
        printf("Maclaurin series for loge (1+%.1f) with %d term(s) = %f\n", x, n, sum);

        return 0;
		}
}


