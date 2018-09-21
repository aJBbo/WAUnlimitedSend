//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAInputTextViewDelegate-Protocol.h"

@class NSString, UIButton, WAInputTextView;
@protocol WAReplyBarDelegate;

__attribute__((visibility("hidden")))
@interface WAReplyBar : UIView <WAInputTextViewDelegate>
{
    id <WAReplyBarDelegate> _delegate;
    UIButton *_sendButton;
    WAInputTextView *_inputTextView;
    NSString *_recipientJID;
    UIView *_topSeparator;
    UIView *_contentView;
    UIView *_inputBoxView;
}

+ (double)textViewMinimumHeight;
+ (double)preferredInitialHeight;
@property(retain, nonatomic) UIView *inputBoxView; // @synthesize inputBoxView=_inputBoxView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(copy, nonatomic) NSString *recipientJID; // @synthesize recipientJID=_recipientJID;
@property(readonly, nonatomic) WAInputTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak id <WAReplyBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)inputTextView:(id)arg1 canMentionUser:(id)arg2;
- (void)inputTextViewDidStopEditingMention:(id)arg1;
- (void)inputTextView:(id)arg1 didEditMentionInRange:(struct _NSRange)arg2;
- (_Bool)inputTextViewShouldTrackMentions:(id)arg1;
- (id)textInputContextIdentifierForInputTextView:(id)arg1;
- (_Bool)inputTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)inputTextViewShouldEndEditing:(id)arg1;
- (void)inputTextViewDidEndEditing:(id)arg1;
- (void)inputTextViewDidBeginEditing:(id)arg1;
- (_Bool)inputTextViewShouldBeginEditing:(id)arg1;
- (void)inputTextViewDictationDidEnd:(id)arg1;
- (void)inputTextView:(id)arg1 didPasteURL:(id)arg2;
- (void)inputTextViewDidPasteGIF:(id)arg1;
- (void)inputTextViewDidPasteImage:(id)arg1;
- (void)inputTextViewDidChange:(id)arg1;
- (void)inputTextView:(id)arg1 needsHeightChangedTo:(double)arg2;
- (double)inputTextViewMaximumHeight:(id)arg1;
- (void)acceptAutoCorrection;
- (void)hideKeyboard;
- (void)showKeyboard;
@property(readonly, nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible;
- (void)setInputTextViewHeight:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (double)singleLineHeight;
@property(copy, nonatomic) NSString *text;
- (void)applicationDidReceiveCommandReturnEvent:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)updateReplyBar;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

