/* EXAMPLE 1 :
DAY NUMBER = 8721
OUTPUT = 23 Y(s) 10 M(s) 26 D(s)

EXAMPLE 2 :
DAY NUMBER = 9451
OUTPUT = 25 Y(s) 10 M(s) 26 D(s) */
 #include <stdio.h> 
 
     int main(){
     printf("Enter day number : ");
     int ndays, y=0, m=0, d;
     scanf("%d", &ndays);
     int n=ndays;
     while(ndays>=365)
     {
         ndays=ndays-365;
         y++;
     }
     int temp=n-(365*y);
     while(temp>=30)
     {
         temp=temp-30;
         m++;
     }
     d=n-((365*y)+(30*m));
     printf("\n%d Y(s) %d M(s) %d D(s)",y,m, d);
 return 0;
 }