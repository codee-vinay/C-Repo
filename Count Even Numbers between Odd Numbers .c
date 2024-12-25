#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
         for(int j=i+1;j<n;j++){
            if(a[j]%2==0){
                if(a[j]%2!=0){
                    break;
                }
                else if(a[j]%2==0){
                    c++;
                }
            }
         }
        }
    }
    printf("%d",c/2);
}