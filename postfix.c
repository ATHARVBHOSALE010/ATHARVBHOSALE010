#include <stdio.h>
#include <string.h>
#include <conio.h>
#define size 100
int top=-1 stack[size]
void push(){
    int no;
    if(top==size-1){
        printf("\nStack is full");
    }
    else{
        printf("\nEnter an element");
        scanf("%d",&no);
        top=top+1;
        stack[top]=no;
    }
}
    void pop(){
    if(top==-1){
        printf("\nstack is empty");
    }
    else{
        printf("\npop element in %d ",stack[top]);
        top=top-1;
    }
}
int isoperator(char symbol){
    if(symbol=='^''||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
int presedence(char symbol){
    if(symbol=='^'){
        return 3;
    }
    else if(symbol=='*''||symbol='/'){
        return 2;
    }
    else if(symbol=='+'||symbol=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
void convo(char infix_exp[],char postfix_exp[]){
    int i,j;
    char item, temp;
    push('(');
    strcat(infixexp,")");
    i=0,j=0;
    item=infix_exp[i];
    while(item!=0){
        if(item=='('){
            push(item);
        }
        else{
            if(isdigit(item)||isalpha(item)){
                postfix_exp[j]=item;
                j++;
            }
        }
        else if (isoperator(item)==1){
            temp=pop();
            while(isoperator(temp)>=presedence(item)){
             postfix_exp[j]=temp;
             j++;
             temp=pop();
            }
            push(temp);
            push(temp);
        }
        else if(item==')'){
            temp=pop();
            while(temp!='c'){
                postfix_exp[j]=temp;
                j++;
                temp=pop();
            }
            else{
                printf("invalid Exp");
                printf("%s",postfix_exp);
            }
            i++;
            item=infix_exp[i];
            }
            if(top>0){
                printf("invald Exp");
            }
            postfix_exp[j]='\o';
    }
    int main(){
        char infix[size], postfix_exp[size];
        prinf("\nEnter A infix Exp");
        scanf("%s"
    }
        }
        
}
