#include<stdio.h>
#include<limits.h>
int main()
{
    char name;
    printf("Enter the data type name (or all to display all): ");
    scanf("%s",&name);
    char i='integer';
    char f='float';
    char d='double';
    char c='char';
    char a='all';
    switch (name)
    {
        case 'i':
            printf("Size of integer: %d bytes\n",sizeof(int));
            printf("Value range of int: %d to %d\n",INT_MIN,INT_MAX);
            break;
        case 'f':
            printf("Size of float: %d bytes\n",sizeof(float));
            printf("Value range of float: %e to %e\n",__FLT_MIN__,__FLT_MAX__);
            break;
        case 'd':
            printf("Size of double: %d bytes\n",sizeof(double));
            printf("Value range of double: %e to %e\n",__DBL_MIN__,__DBL_MAX__);          
            break;
        case 'c':
            printf("Size of char: %d bytes\n",sizeof(char));
            printf("Value range of int: %d to %d\n",CHAR_MIN,CHAR_MAX);
            break;      
        case 'a':
            printf("Size of integer: %d bytes\n",sizeof(int));
            printf("Value range of int: %d to %d\n",INT_MIN,INT_MAX);
            printf("Size of float: %d bytes\n",sizeof(float));
            printf("Value range of float: %e to %e\n",__FLT_MIN__,__FLT_MAX__);
            printf("Size of double: %d bytes\n",sizeof(double));
            printf("Value range of double: %e to %e\n",__DBL_MIN__,__DBL_MAX__);
            printf("Size of char: %d bytes\n",sizeof(char));
            printf("Value range of int: %d to %d\n",CHAR_MIN,CHAR_MAX);
            break;    
    }
}