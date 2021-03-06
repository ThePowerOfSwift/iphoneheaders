/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class NSMutableArray, SBAwayController;

@interface SBAwayModel : NSObject {
	SBAwayController* _controller;
	NSMutableArray* _standardVMs;
	NSMutableArray* _calls;
	NSMutableArray* _SMSs;
	NSMutableArray* _otherAwayItems;
}
+(BOOL)shouldHideSMSSender;
-(instancetype)initWithController:(id)controller;
// inherited: -(void)dealloc;
-(void)markAwayTime;
-(void)addOtherAwayItem:(id)item;
-(void)addCall:(CTCallRef)call;
-(void)addSMSMessage:(id)message;
-(void)populateWithMissedCalls:(id)missedCalls;
-(void)populateWithMissedSMS:(id)missedSMS;
-(void)populateWithMissedEnhancedVoiceMails:(id)missedEnhancedVoiceMails;
-(id)missedItems;
-(int)uncoalescedMissedItemCount;
-(void)setStandardVoiceMailCount:(int)count;
@end

