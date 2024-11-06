// lab_9_2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#pragma warning(disable : 4996)
#include <math.h>
#include <stdio.h>
#include <conio.h>

#define L 13  
#define M 64  
#define X 8   
#define Y 5   
#define Z 2   
#define S 36

#define SQR(p) (p)*(p) 
#define MAX(p,u) ((p)>(u))?(p):(u) 
#define ABS(p) ((p) >= 0 ? (p) : -(p)) 
#define ADD(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))

// Print the integer with a message
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)
// Print the float with a message
#define PRINTR(w) puts ("result:"); \
printf (#w"=%f\n",(float)w)

void main()
{
    int x = X, y = Y, z = Z, sub, n_kvadr, x_kvadr;

    PRINTI(z);
    PRINTI(x);
    PRINTI(y);


    x_kvadr = SQR(x);

#if (SQR(X) == M)  
    PRINTI(x_kvadr);
    printf("x_kvadr is equal to M (%d)\n", M);  // Printing that x_kvadr is equal to M
#else
    PRINTI(x_kvadr);
    printf("x_kvadr is not equal to M (%d)\n", M);  // Printing that x_kvadr is not equal to M
#endif

    
    int sum = ADD(x, y);  
#if (ADD(X, Y) == L)  
    PRINTI(sum);
    printf("Sum is equal to L (%d)\n", L);
#else
    PRINTI(sum);
    printf("Sum is not equal to L (%d)\n", L);
#endif
   
    n_kvadr = SQR(x - z); 
    PRINTI(n_kvadr);
#if (SQR(X - Z) == L)  
    printf("(X - Z)^2 is equal to L (%d)\n", L);
#else
    printf("(X - Z)^2 is not equal to L (%d)\n", L);
#endif

    
    sub = x - y; 
    PRINTI(sub);
#if (X - Y == Z)  
    printf("(X - Y) is equal to Z (%d)\n", Z);
#else
    printf("(X - Y) is not equal to Z (%d)\n", Z);
#endif   


}
