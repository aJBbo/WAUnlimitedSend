//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WACardNavigationControllerViewDelegate;

__attribute__((visibility("hidden")))
@interface WACardNavigationControllerView : UIView
{
    id <WACardNavigationControllerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WACardNavigationControllerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
