/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, IMAPFetchResult, NSString;

@interface IMAPResponse : NSObject {
	unsigned _responseType : 8;
	NSString* _tag;
	IMAPResponseData _data;
}
-(int)responseType;
-(void)setResponseType:(int)type;
-(BOOL)isUntagged;
-(BOOL)isAlertResponse;
-(id)tag;
-(void)setTag:(id)tag;
// inherited: -(void)dealloc;
-(int)responseCode;
-(id)responseInfo;
-(id)userData;
-(id)userString;
-(void)setUserData:(id)data responseCode:(int)code responseInfo:(id)info;
-(id)capabilities;
-(void)setCapabilities:(id)capabilities;
-(id)serverInfo;
-(void)setServerInfo:(id)info;
-(unsigned long)number;
-(void)setNumber:(unsigned long)number;
-(id)flags;
-(void)setFlags:(id)flags;
-(id)mailboxName;
-(id)statusEntries;
-(void)setMailboxName:(id)name statusEntries:(id)entries;
-(id)searchResults;
-(void)setSearchResults:(id)results;
-(unsigned long)mailboxAttributes;
-(id)separator;
-(void)setMailboxAttributes:(unsigned long)attributes separator:(id)separator mailboxName:(id)name xlistExtra:(id)extra;
-(id)permanentTag;
-(id)fetchResultWithType:(int)type;
-(id)fetchResults;
-(void)setFetchResults:(id)results;
-(id)quotaRootNames;
-(void)setMailboxName:(id)name quotaRootNames:(id)names;
-(id)quotaRootName;
-(id)quotas;
-(void)setQuotaRootName:(id)name quotas:(id)quotas;
-(int)uidFlagsChange;
-(void)setUidFlagsChange:(int)change;
-(id)uids;
-(void)setUids:(id)uids;
-(id)flagsFetchResult;
-(void)setFlagsFetchResult:(id)result;
-(id)responseName;
-(id)parameters;
-(void)setResponseName:(id)name parameters:(id)parameters;
// inherited: -(id)description;
-(instancetype)initWithConnection:(id)connection;
-(instancetype)initWithString:(id)string;
@end

