//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAFriendLocation-Protocol.h"

@class CLLocation, NSDate, NSString, WAProfilePictureDynamicThumbnailView;

__attribute__((visibility("hidden")))
@interface WAFriendLocation : NSObject <WAFriendLocation>
{
    _Bool _isPhoneNumber;
    NSString *_nameOrFormattedPhoneNumber;
    NSString *_pushName;
    CLLocation *_location;
    NSString *_jid;
    NSDate *_endTime;
    WAProfilePictureDynamicThumbnailView *_profilePicture;
}

@property(retain, nonatomic) WAProfilePictureDynamicThumbnailView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *pushName; // @synthesize pushName=_pushName;
@property(nonatomic) _Bool isPhoneNumber; // @synthesize isPhoneNumber=_isPhoneNumber;
@property(copy, nonatomic) NSString *nameOrFormattedPhoneNumber; // @synthesize nameOrFormattedPhoneNumber=_nameOrFormattedPhoneNumber;
- (void).cxx_destruct;
- (id)pushNameAttributedText;
- (id)phoneNumberOrContactNameAttributedTextInBold:(_Bool)arg1;
- (id)bigAttributes:(_Bool)arg1 leadingAlignment:(_Bool)arg2 bold:(_Bool)arg3;
- (id)initWithJID:(id)arg1 location:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

