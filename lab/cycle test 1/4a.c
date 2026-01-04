#include<stdio.h>
#include<math.h>

int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n[10] = {10, 36, 54, 89, 12, 27, 5};
    int w[10] = {0};
    int i, sum =0, A, cube, temp_a, temp_w;
    for(i = 0; i<7; i++){
        A = n[i];
        double cubroot = round(pow(A, 1.0/3));
        cube = (int)(cubroot*cubroot*cubroot);
    
        if(A == cube){
            w[i]+=5;
        }
        if(A%4==0 && A%6==0){
            w[i]+=4;
        }
        if(isPrime(A)){
            w[i]+=3;
        }
    }

    printf("Elements\t\tweight\n");
    for(i = 0; i<7; i++){
        printf("%d\t\t\t %d\n", n[i], w[i]);
        sum += w[i];
    }

    for(i =0; i<(7-1); i++){
        for(int j = 0; j<(7-i-1); j++){
            if(w[i]>w[j+1]){
                temp_w = w[j];
                w[i] = w[j+1];
                w[j+1] = temp_w;
                temp_a = n[j];
                n[i] = n[j+1];
                n[j+1] = temp_a;
            }
        }
    }
    printf("Sorting the element based on weights");
    for(i = 0; i<7; i++){
        printf("%d\t\t%d\n", n[i], w[i]);
    }
    return 0;
}

