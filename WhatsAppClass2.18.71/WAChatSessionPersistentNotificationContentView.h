//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol WAChatSessionPersistentNotificationContentViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface WAChatSessionPersistentNotificationContentView : UIView
{
    _Bool _enableLinksInText;
    id <WAChatSessionPersistentNotificationContentViewLayoutDelegate> _layoutDelegate;
}

+ (id)defaultFont;
@property(nonatomic) _Bool enableLinksInText; // @synthesize enableLinksInText=_enableLinksInText;
@property(nonatomic) __weak id <WAChatSessionPersistentNotificationContentViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (double)preferredDismissButtonHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *text;
- (_Bool)viewWasTapped:(id)arg1;
- (void)parentViewControllerWillBeginInteraction;
- (void)parentViewControllerDidDisappear;
- (id)initWithFrame:(struct CGRect)arg1;

@end

