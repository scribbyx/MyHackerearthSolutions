//super large factorials using linked lists
#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node *next;
};
typedef struct node linked;
 
linked *insert(linked *head, int val){
    linked *temp = (linked*)malloc(1*sizeof(linked));
    linked *temp1 = head;
    temp -> data = val;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
        return head;
    }
    temp1 = head;
    while(temp1 -> next != NULL){
        temp1 = temp1 -> next;
    }
    temp1-> next = temp;
    return head;
}
 
linked *reverse(linked *head){
    linked *prev, *curr, *Next;
    prev = NULL;
    curr = head;
 
    while(curr != NULL){
        Next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = Next;
    }
    head = prev;
    return head;
 
}
 
void print(linked *head){
 
    while(head != NULL){
        printf("%d", head -> data);
        head = head -> next;
    }
}
 
void factorial(int n){
    int i, k = 0, index = 1, mult, carry = 0;
    linked *a = NULL, *head = NULL;
 
    a = insert(a, 1);
    head = a;
    for(i = 2; i <= n; i++){
            k = 0;
            a = head;
            while(k < index){
                mult = (a->data)*i + carry;
                a->data = mult%10;
                carry = mult/10;
                if(carry > 0 && a->next == NULL){
                    index++;
                    a = insert(a, 0);
                }
                k++;
                a = a->next;
            }
    }
    print(reverse(head));
 
}
 
int main(void){
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    printf("\n");
    factorial(n);
    return 0;
 
}
 