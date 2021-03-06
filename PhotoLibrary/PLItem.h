/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLItem : NSObject {
	id _internal;
}
@property(copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) int itemType;
+(Class)_internalClass;
// inherited: -(instancetype)init;
// inherited: -(void)dealloc;
-(instancetype)initWithURL:(id)url;
-(instancetype)initWithData:(id)data;
-(instancetype)initWithData:(id)data pathExtension:(id)extension;
-(id)_MLPhoto;
-(BOOL)_allowsRotation;
@end

