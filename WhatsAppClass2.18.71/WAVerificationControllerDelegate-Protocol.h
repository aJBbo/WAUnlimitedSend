//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAVerificationController;

@protocol WAVerificationControllerDelegate <NSObject>
- (void)verificationControllerDidDismissWelcomeScreen:(WAVerificationController *)arg1;
- (void)verificationControllerDidCancel:(WAVerificationController *)arg1;
- (void)verificationControllerDidCompleteRegistration:(WAVerificationController *)arg1;
- (void)verificationControllerDidSucceed:(WAVerificationController *)arg1;
@end

