//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface XMPPUPIBankResponse : NSObject
{
    NSString *_code;
    NSString *_image;
    NSString *_name;
    NSString *_phoneNumber;
    NSArray *_pspRouting;
    NSString *_uniqueId;
}

+ (id)responseFromStanza:(id)arg1;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSArray *pspRouting; // @synthesize pspRouting=_pspRouting;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)description;

@end

