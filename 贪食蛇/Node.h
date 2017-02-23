//
//  Node.h
//  贪食蛇
//
//  Created by Qsyx on 17/2/17.
//  Copyright © 2017年 Qsyx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define NODEWH 10

@interface Node : NSObject
@property (nonatomic, assign) CGPoint coordinate;
+ (instancetype)nodeWithCoordinate:(CGPoint)coordinate;
@end
