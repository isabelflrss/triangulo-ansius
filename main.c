/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 3 de septiembre de 2018, 10:19 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sumt=a+b+c;
    if ((a,b,c>0)&&(sumt==180)){
        if ((a==b)&&(a==c)&&(b==c)){
            printf("EQUILATERO");
        }
        if ((a==b)&&(c!=b)&&(a!=c)){
            printf("ISOCELES");
        }
        if ((b==c)&&(a!=c)&&(a!=b)){
            printf("ISOCELES");
        }
        if ((c==a)&&(a!=b)&&(c!=b)){
            printf("ISOCELES");
        }
        if((a!=b)&&(a!=c)&&(c!=b)){
            printf("ESCALENO");
        }
    } else{
        printf("ERROR");
    }
    return 0;
}

