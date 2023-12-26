#include<stdio.h>

/*
 ---> Tower of Hanoi 
 Rules: 1: Move only one disk at a time
        2: Bigger disk cannot be put on smaller disk
*/
void hanoi(int disk, char source, char destination, char auxillary){
    if (disk == 0 || disk < 0){
        printf("\nInvalid Disk");
    } else if (disk == 1){
        printf("\nMove disk %d from %c to %c", disk, source, destination);
    } else {
        hanoi(disk-1, source, auxillary, destination);
        printf("\nMove disk %d from %c to %c", disk, source, destination);
        hanoi(disk-1, auxillary, destination, source);
    }
}

int main(){
    char sor = 'A', dest = 'B', aux = 'C';
    
    int disks;
    printf("Enter the number of disks : ");
    scanf("%d", &disks);
    
    hanoi(disks, sor, dest, aux);
}