/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "IMAPConnection.h"
#import "Message-Structs.h"


@interface ExchangeConnection : IMAPConnection {
}
-(id)_fetchArgumentForMessageUidsAndFlags;
-(id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)headers;
-(BOOL)_isFetchResponseValid:(id)valid;
@end

