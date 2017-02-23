//
//  Node.m
//  贪食蛇
//
//  Created by Qsyx on 17/2/17.
//  Copyright © 2017年 Qsyx. All rights reserved.
//

#import "Node.h"

@implementation Node
+ (instancetype)nodeWithCoordinate:(CGPoint)coordinate {
    Node *node = [Node new];
    node.coordinate = coordinate;
    return node;
}
@end
