//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WAChatSessionNotificationViewDelegate;

__attribute__((visibility("hidden")))
@interface WAChatSessionNotificationView : UIView
{
    id <WAChatSessionNotificationViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAChatSessionNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parentViewControllerWillBeginInteraction;
- (void)parentViewControllerDidDisappear;

@end

