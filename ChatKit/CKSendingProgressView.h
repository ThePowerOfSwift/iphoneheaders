/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import <UIKit/UIView.h>

@class CKProgressBar, UILabel;

@interface CKSendingProgressView : UIView {
	CKProgressBar* _sendingProgress;
	UILabel* _statusLabel;
}
+(CGRect)defaultFrame;
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStatus:(id)status;
-(float)progressValue;
-(void)setProgressValue:(float)value;
@end

