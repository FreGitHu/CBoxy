#include<stdio.h>
int main(int argc, char *argv[]) {
    if (argc == 0) {
        printf("\033[1;33mWARNING: \033[0m\033[1mNo Program Was Provided, This Could Be An Issue OR An Attacker Trying TO HACK Your Computer. If you are not sure exit this program RIGHT NOW\033[0m");
    }
    printf("Boxy Compiler (aka CBoxy I guess). Pull request what you want to be in this message (no normal stuff)");

    return 0;
}