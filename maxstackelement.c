#include<stdio.h>
#include<malloc.h>
struct strStack{
    int el;
    int max;
};
typedef struct strStack strStack;


int main(){
    int n =0, q=0, top=-1, max=0, el=0;
    scanf("%d", &n);
    strStack* s=(strStack*)malloc(n*sizeof(strStack));
    while(n--){
        scanf("%d", &q);
        if(q==1){
            scanf("%d", &el);
            s[++top].el=el;
            if(el > max){
                max = el;
            }
            s[top].max=max;

        
    }else if(q==2){
//         pop
        // s[top].el=NULL;
        // s[top].max=NULL;
        max= s[--top].max;

 
}else if(q == 3){
//     print
    printf("%d\n", s[top].max);
}

}
}