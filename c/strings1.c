//
//  main.c
//  strings1
//
//  Created by xuhuan lu on 2022/5/14.
//

#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(int argc, const char * argv[]) {
    
    char words[MAXLENGTH] = "I am a string in an array.";
    const char *pt1 = "something is pointing at me.";
    
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
    
    return 0;
}
