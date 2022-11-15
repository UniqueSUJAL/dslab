#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{lparen,rparen,plus,minus,multiply,divide,expon,eos,operand}precedance;
int isp[] = {0,19,12,13,14,15,16,0};
int icp[] = {20,19,12,13,14,15,16,0};
char expr[1000];
precedance stack[1000];
int top = 0;
precedance getToken(char *symbol,int *n)
{
    *symbol = expr[(*n)++];
    switch(*symbol)
    {
        case '(': return lparen;
        case ')': return rparen;
        case '-': return minus;
        case '+': return plus;
        case '*': return multiply;
        case '/': return divide;
        case '^': return expon;
        case ' ':
        case '\0': return eos;
        default:   return operand;
    }
}

void printToken(precedance token)
{
    switch(token)
    {
        case plus       :   printf("+");break;
        case minus      :   printf("-");break;
        case multiply   :   printf("*");break;
        case divide     :   printf("/");break;
        case expon        :   printf("^");break;
    }

}
void push(precedance token)
{
    stack[++top] = token;
}
precedance pop()
{
    return stack[top--];
}
void postfix()
{
    int n=0;
    char symbol;
    precedance token;
    stack[0]=eos;
    for(token = getToken(&symbol,&n);token!=eos;token = getToken(&symbol,&n))
    {
        if(token==operand)
            printf("%c",symbol);
        else if(token == rparen)
        {
            while(stack[top]!=lparen)
                printToken(pop());

            pop();

        }
        else
        {
            while(isp[stack[top]]>=icp[token])
                printToken(pop());

            push(token);
        }
    }

    while((token=pop())!=eos)
        printToken(token);

    printf("\n");
    memset(expr, 0, 1000*sizeof(char));
    memset(stack, 0, 1000*sizeof(precedance));
    top = 0;

}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",expr);
        postfix();
    }

    return 0;
}