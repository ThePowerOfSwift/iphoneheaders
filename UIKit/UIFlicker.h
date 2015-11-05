/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>

@class UIView;

@interface UIFlicker : NSObject {
	UIView* _target;
	CGPoint _startLocation;
	int _throwIterations;
	id _delegate;
	int _mouseUpCount;
	int _mouseDraggedCount;
	float _delay;
	CGPoint _offset;
}
-(void)_mouseDraggedMemberListTest;
-(void)_mouseUpMemberListTest;
-(void)_throwMemberListTest;
-(instancetype)init;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)offset;
-(void)setTarget:(id)target;
-(void)setStartLocation:(CGPoint)location;
-(void)setIterations:(int)iterations;
-(void)setDelay:(float)delay;
-(void)setDelegate:(id)delegate;
-(void)run;
@end
