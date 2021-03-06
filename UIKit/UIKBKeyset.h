/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSCoder, UIKBKeylist;

@interface UIKBKeyset : NSObject <NSCoding> {
	NSString* m_name;
	NSMutableArray* m_keylists;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSMutableArray* keylists;
+(UIKBKeyset*)keyset;
//-(instancetype)init;
//-(void)dealloc;
//-(instancetype)initWithCoder:(NSCoder*)coder;
//-(void)encodeWithCoder:(NSCoder*)coder;
-(UIKBKeylist*)keylistWithName:(NSString*)name;
-(BOOL)addKeylist:(UIKBKeylist*)keylist;
//-(NSString*)description;
@end
