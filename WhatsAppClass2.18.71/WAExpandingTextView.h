//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATextView.h"

@protocol WAExpandingTextViewDelegate;

__attribute__((visibility("hidden")))
@interface WAExpandingTextView : WATextView
{
    double _previousWidth;
    _Bool _nonExclusiveUserInteractionEnabled;
    id <WAExpandingTextViewDelegate> _delegate;
}

@property(nonatomic) _Bool nonExclusiveUserInteractionEnabled; // @synthesize nonExclusiveUserInteractionEnabled=_nonExclusiveUserInteractionEnabled;
@property(nonatomic) __weak id <WAExpandingTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

