#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int numbers[n];
    for(int i=0; i<n; i++){
        scanf("%d", &numbers[i]);
    }
    int s = 0;
    int scp;
    for(int i=0; i<n; i++){
        scp = sqrt(numbers[i]);
            if(scp * scp == numbers[i]){
                s++;
        }
    }
    printf("%d", s);
    return 0;
}
