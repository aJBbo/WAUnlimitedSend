//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSString, WAMessagePaymentDetailsSliceRenderer, WAWeakTimer;
@protocol WAMessagePaymentDetailsSliceDelegate;

__attribute__((visibility("hidden")))
@interface WAMessagePaymentDetailsSlice : WAMessageContainerSlice
{
    WAMessagePaymentDetailsSliceRenderer *_renderer;
    WAWeakTimer *_timer;
    id <WAMessagePaymentDetailsSliceDelegate> _delegate;
    NSString *_messageUniqueID;
}

+ (Class)viewClass;
@property(readonly, nonatomic) NSString *messageUniqueID; // @synthesize messageUniqueID=_messageUniqueID;
@property(nonatomic) __weak id <WAMessagePaymentDetailsSliceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidateExpirationTextIfNeeded;
- (void)scheduleTimerToInvalidateExpirationText:(double)arg1;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (id)initWithMessages:(id)arg1 text:(id)arg2 expirationDate:(id)arg3 useItalicFont:(_Bool)arg4 metrics:(CDStruct_8ee84fd7)arg5;

@end

