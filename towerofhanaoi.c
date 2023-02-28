#include<stdio.h>
void towerofhanoi(int n, char from_rod, char to_rod, char aux_rod) // function for tower of hanoi
{
if(n==1) // if thereisonly 1 disk
{
printf("Movedisk 1 from rod %c to rod %c\n",from_rod,to_rod);
return;
}

towerofhanoi(n-1,from_rod,to_rod,aux_rod); //if there are morethan 1 disk
printf("Movedisk %d from rod %c to rod %c\n",n,from_rod,to_rod);
towerofhanoi(n-1,aux_rod,to_rod,from_rod); //recursive call
}
void main()
{
int n;
printf("Enter the Number of disks:"); //taking input from user for number of diak
scanf("%d",&n);
towerofhanoi(n,'A','B','C'); //function call
}
