//
//  DrawView.h
//  Quiz8
//
//  Created by Jon Diehl on 4/12/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawView : UIView
{
    NSMutableArray *points;
}

@property (nonatomic) CGPoint currentPoint;
@property (nonatomic) float currentVelocity;
@property (nonatomic) float currentHorizontalAngle;
@property (nonatomic) float currentVerticalAngle;

- (void)saveCurrentPoint;
- (void)drawCurrentPoint;
- (void)clearBoard;

@end
