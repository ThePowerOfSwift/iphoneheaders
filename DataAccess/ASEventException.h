/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "NSCoding.h"
#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASEvent.h"

@class NSNumber, NSMutableDictionary, NSDate;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber* _isDeleted;
	NSDate* _exceptionStartTime;
	NSMutableDictionary* _placeHolder;
	ASEvent* _originalEvent;
}
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
// in a protocol: -(void)applyPlaceHolder;
// in a protocol: -(void)clearPlaceHolder;
// in a protocol: -(void)setObject:(id)object forCCPT:(int)ccpt;
// inherited: -(id)asParseRules;
// inherited: -(void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;
-(id)_transformedExceptionStartDateForCalFramework:(id)calFramework;
-(id)_transformedExceptionStartDateForActiveSync:(id)activeSync;
-(id)serverIdForCalFrameworkWithParentEvent:(id)parentEvent;
-(void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void*)record intoCalendar:(void*)calendar treatNullsAsDeletes:(BOOL)deletes account:(id)account;
// inherited: -(void)postProcessApplicationData;
// inherited: -(id)uidGeneratedIfNecessaryWithLocalEvent:(void*)localEvent;
-(void)takeValuesFromParentForAccount:(id)account;
-(instancetype)initWithCalEvent:(void*)calEvent originalEvent:(id)event account:(id)account;
-(instancetype)initWithExceptionStartTime:(id)exceptionStartTime;
// inherited: -(BOOL)deleteFromCalendar;
// inherited: -(void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;
// inherited: -(void)loadClientIDs;
// inherited: -(id)description;
// inherited: -(void)dealloc;
// inherited: -(id)exceptionDate;
// inherited: -(void)setExceptionDate:(id)date;
// in a protocol: -(nullable instancetype)initWithCoder:(NSCoder *)coder;
// in a protocol: -(void)encodeWithCoder:(id)coder;
// inherited: -(BOOL)hasOccurrenceInTheFuture;
-(id)originalEvent;
-(void)setOriginalEvent:(id)event;
-(id)isDeleted;
-(void)setIsDeleted:(id)deleted;
-(id)exceptionStartTime;
-(void)setExceptionStartTime:(id)time;
@end

