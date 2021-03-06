//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentBaseAccount.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WAPaymentBankAccount : WAPaymentBaseAccount
{
    // Error parsing type: , name: balance_1000
    // Error parsing type: , name: balanceTimestamp
    // Error parsing type: , name: bankIcon
    // Error parsing type: , name: bankName
}

+ (id)bankAccountFromPaymentAccount:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initFromPaymentAccount:(id)arg1;
@property(nonatomic, readonly) NSString *balanceWithCurrency;
@property(nonatomic, readonly) double balanceForStanza;
@property(nonatomic, readonly) NSString *nameForDisplay;
@property(nonatomic, readonly) NSString *shortNameForDisplay;
@property(nonatomic, readonly) NSString *holderName;
@property(nonatomic, readonly) NSString *bankPhoneNumber;
@property(nonatomic, readonly) NSString *bankCode;
@property(nonatomic, readonly) NSString *accountNumber;
@property(nonatomic, readonly) NSString *bankName; // @synthesize bankName;
@property(nonatomic, readonly) NSString *bankIcon; // @synthesize bankIcon;
@property(nonatomic, readonly) NSDate *balanceTimestamp; // @synthesize balanceTimestamp;
@property(nonatomic, readonly) long long balance_1000; // @synthesize balance_1000;

@end

