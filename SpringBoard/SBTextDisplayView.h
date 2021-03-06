/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSString, UIFont, UIColor;

@interface SBTextDisplayView : UIView {
	NSString* _text;
	UIFont* _font;
	UIColor* _fontColor;
}
-(instancetype)initWithWidth:(float)width font:(id)font fontColor:(id)color;
// inherited: -(void)dealloc;
-(void)_updateText;
-(void)setText:(id)text;
-(void)setFont:(id)font;
-(void)setFontColor:(id)color;
-(void)drawRect:(CGRect)rect;
-(id)_scriptingInfo;
@end

