//
//  main.c
//  friends
//
//  Created by xuhuan lu on 2022/11/4.
//

#include <stdio.h>
#define  LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(int argc, const char * argv[]) {
    
    struct guy fellow[2] = {
        {
            {"Lu", "xuhuan"},
            "anything",
            "student",
            2000.0
        },
        {
            {"Qin", "yue"},
            "Nothing",
            "student",
            1500.0
        }
    };
    char *mesg = "Don't be a fool!";
    struct guy *him;    //   这是一个指向结构体的指针
    
    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];
    printf("pointer #1: %p #2: %p\n", him, him + 1);
    printf("him->income: %f him->name: %.2f him->favfood: %s\n",him->income, him->handle, him->favfood);
    him++;
    printf("him->income: %f him->name: %.2f him->favfood: %s\n",him->income, him->handle, him->favfood);

    
    return 0;
}
