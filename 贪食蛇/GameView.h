//
//  GameView.h
//  贪食蛇
//
//  Created by Qsyx on 17/2/17.
//  Copyright © 2017年 Qsyx. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Snake;
@interface GameView : UIView
@property (nonatomic, strong) Snake *snake;
@end
