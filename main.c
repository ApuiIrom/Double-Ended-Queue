// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int deque[MAX],r=-1,f=-1;
void insertrear(){
    if(f==r+1)
        printf("Deque is full\n");
    else{
        printf("Enter the item\n");
        int item;
        scanf("%d",&item);
        if(r==-1){
            f=0;
            r=0;
        }
        else if(r==MAX-1)
            r=0;
        else
            r++;
        deque[r]=item;
        printf("Item inserted at rear\n");
    }
}
void insertfront(){
    if(f==r+1)
        printf("Dequeue is full\n");
    else{
        printf("Enter the item\n");
        int item;
        scanf("%d",&item);
        if(f==-1){
            f=0;
            r=0;
        }
        else if(f==0)
            f=MAX-1;
        else
            f--;
        deque[f]=item;
        printf("Item inserted at front\n");
    }
}
void deleterear(){
    if(r==-1)
        printf("Deque is empty\n");
    else{
        if(r==f)
            r=f=-1;
        else if(r==0)
            r=MAX-1;
        else
            r--;
        printf("Item deleted at rear\n");
    }
}
void deletefront(){
    if(f==-1)
        printf("Deque is empty\n");
    else{
        if(r==f)
            f=r=-1;
        else if(f==MAX-1)
            f=0;
        else
            f++;
        printf("Item deleted at the front\n");
    }
}
void display(){
    if(f==-1)
        printf("No item to display\n");
    else{
        int k=f;
        while(k!=r)
        {
            printf("%d ",deque[k]);
            k=(k+1)%MAX;
        }
        printf("%d\n",deque[r]);
    }
}
int main() {
    int n;
    printf("Enter your choice:\n1.Insert Front 2.Insert Rear 3.Delete Front 4.Delete Rear 5.Display 6.Exit\n");
    while(1){
         scanf("%d",&n);
        switch(n){
            case 1:
                insertfront();
                break;
            case 2:
                insertrear();
                break;
            case 3:
                deletefront();
                break;
            case 4:
                deleterear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid Input");
                break;
        }
        }
    return 0;
}
