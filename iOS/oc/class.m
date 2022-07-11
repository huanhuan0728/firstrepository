//
//  main.m
//  class
//
//  Created by xuhuan lu on 2022/7/11.
//

#import <Foundation/Foundation.h>
// -----@interface部分------

@interface Fraction : NSObject

- (void) print;
- (void) setNumerator: (int) n;
- (void) setDenominator: (int) d;

@end

@implementation Fraction
{
    int numerator;
    int denominator;
}

- (void) print {
    NSLog(@"%i / %i", numerator, denominator);
}

- (void) setNumerator:(int) n {
    numerator = n;
}

- (void) setDenominator:(int) d {
    numerator = d;
}

@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Fraction *myFraction;
        
        // 创建一个实例
        
        myFraction = [Fraction alloc];
        myFraction = [myFraction init];
        
        // 设置分数为1/3
        
        [myFraction setNumerator:1];
        [myFraction setDenominator:3];
        
        // 使用打印方法显示分数
        
        NSLog(@"The value of myFraction is ");
        [myFraction print];
        
        
    }
    return 0;
}
