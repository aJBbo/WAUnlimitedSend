//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAContactPropertyEditingCell.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UITextView;
@protocol WAContactNoteEditingCellDelegate;

__attribute__((visibility("hidden")))
@interface WAContactNoteEditingCell : WAContactPropertyEditingCell <UITextViewDelegate>
{
    UILabel *_labelNotes;
    UITextView *_textView;
}

+ (double)preferredCellHeightWithContactProperty:(id)arg1 forWidth:(double)arg2;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *labelNotes; // @synthesize labelNotes=_labelNotes;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reconfigure;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAContactNoteEditingCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

