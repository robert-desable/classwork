#include <stdio.h>
#define SIZE 100
#define GAP_SIZE 5
void sortSelection(int a[]){
    int i,j,temp;
    for(i=0;i<SIZE-1;i++)
        for(j=i+1;j<SIZE;j++)
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}

void sortBubble(int a[]){
    int i,j,temp;
    int f=1;
    for(i=0;i<SIZE-1 && f;i++){
        f=0;
        for(j=0;j<SIZE-i-1;j++){
            if(a[j+1]<a[j]){
                f=1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
        }
    }
}

void sortInsertion(int a[]){
    int i,j,temp;
    for(i=1;i<SIZE;i++){
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)
            a[j+1]=a[j];
        a[j+1]=temp;
    }
}

void sortShell(int a[],int gap[]){
    int i,j,k,g,temp;
    for(k=0;k<GAP_SIZE;k++){
        g=gap[k];
        for(i=g;i<SIZE;i++){
            temp=a[i];
            for(j=i-g;j>=0 && temp<a[j];j-=g)
                a[j+g]=a[j];
            a[j+g]=temp;
        }
    }
}

void sortMergeIterative(int a[]){
    int i,j,k,l1,l2,u1,u2,temp[SIZE];
    int size=1;
    while(size<=SIZE){
        k=0;
        l1=0;
        while(l1+size<SIZE){
            l2=l1+size;
            u1=l2-1;
            u2=((u1+size)<SIZE)?u1+size):(SIZE-1);
            for(i=l1,j=l2;l1<=u1&&l2<=u2;k++){
                if a[i]<a[j] temp[k]=a[i++];
                else temp[k]=a[j++];
            }
            while(i<=u1) temp[k++]=a[i++];
            while(j<=u2) temp[k++]=a[j++];
            l1=u2+1;
        }
        for(i=l1;i<SIZE;i++,k++) temp[k]=a[i];
        for(i=0;i<SIZE;i++) a[i]=temp[i];
        size*=2;
    }
}

{
    void merge(int a[],int lower,int mid,int upper){
        int l1=lower,l2=mid+1,u1=mid,u2=upper;
        int i,j,k,temp[SIZE];
        for(i=l1,j=l2;i<=u1 && j<=u2;k++)
            if(a[i]<a[j]) temp[k]=a[i++];
            else temp[k]=a[j++];
        while(i<=u1) temp[k++]=a[i++];
        while(j<u2) temp[k++]=a[j++];
        for(i=lower;i<upper;i++) a[i]=temp[i];
    }
    void sortMergeRecursive(int a[],int lower,int upper){
        if(lower<upper){
            int mid=(lower+upper)/2;
            sortMergeRecursive(a[],lower,mid);
            sortMergeRecursive(a[],mid+1,upper);
            merge(a[],lower,mid,upper);
        }
    }
}
