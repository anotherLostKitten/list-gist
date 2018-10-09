#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "ll2.h"

int main(){
    printf("All Star:\n");
    struct node* ll1 = NULL;
    ll1 = insert_front(ll1,"Some");
    print_list(ll1);
    ll1 = insert_front(ll1,"body");
    print_list(ll1);
    ll1 = insert_front(ll1,"once");
    ll1 = insert_front(ll1,"told me");
    print_list(ll1);
    ll1 = insert_front(ll1,"the world");
    ll1 = insert_front(ll1,"was gonna");
    ll1 = insert_front(ll1,"roll me");
    print_list(ll1);
    
    printf("de-structing All Star:\n");
    ll1 = fee_list(ll1);
    printf("All Star destructed:\n\n");
    print_list(ll1);
    return 0;
}
