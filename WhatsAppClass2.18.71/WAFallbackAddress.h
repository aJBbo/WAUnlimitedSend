//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WAInetAddress;

__attribute__((visibility("hidden")))
@interface WAFallbackAddress : NSObject
{
    _Bool _useHTTPS;
    _Bool _shouldOverride;
    unsigned short _port;
    WAInetAddress *_ipAddress;
    NSDate *_effectiveDate;
    NSDate *_expirationDate;
}

+ (id)fallBackAddressWithIPEntry:(id)arg1;
+ (void)setIPEntries:(id)arg1;
+ (id)currentFallbackAddresses;
@property(readonly, nonatomic) _Bool shouldOverride; // @synthesize shouldOverride=_shouldOverride;
@property(readonly, nonatomic) _Bool useHTTPS; // @synthesize useHTTPS=_useHTTPS;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, nonatomic) WAInetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (_Bool)isValidAtTime:(id)arg1;
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 effectiveDate:(id)arg3 expirationDate:(id)arg4 useHTTPS:(_Bool)arg5 shouldOverride:(_Bool)arg6;

@end

