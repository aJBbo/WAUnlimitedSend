//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATextView.h"

#import "UITextViewDelegate-Protocol.h"
#import "WAMentionsTextStorageDelegate-Protocol.h"

@class NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, WAMentionsTextStorage, WARichText;
@protocol UITextViewDelegate, WAInputTextViewDelegate;

__attribute__((visibility("hidden")))
@interface WAInputTextView : WATextView <UITextViewDelegate, WAMentionsTextStorageDelegate>
{
    double _previousContentHeight;
    _Bool _scrollIndicatorsShown;
    WAMentionsTextStorage *_mentionsTextStorage;
    _Bool _isShowingMenuControllerForBubbleTableViewCell;
    _Bool _alwaysBecomesFirstResponder;
    _Bool _isFormattingMenuVisible;
    double _lastReportedHeight;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    _Bool _caretHidden;
    id <WAInputTextViewDelegate> _inputTextViewDelegate;
    double _minimumHeight;
    struct _NSRange _unselectableRange;
    struct UIEdgeInsets _visibleInsets;
}

+ (void)initialize;
@property(nonatomic) struct UIEdgeInsets visibleInsets; // @synthesize visibleInsets=_visibleInsets;
@property(nonatomic) struct _NSRange unselectableRange; // @synthesize unselectableRange=_unselectableRange;
@property(nonatomic, getter=isCaretHidden) _Bool caretHidden; // @synthesize caretHidden=_caretHidden;
@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) __weak id <WAInputTextViewDelegate> inputTextViewDelegate; // @synthesize inputTextViewDelegate=_inputTextViewDelegate;
- (void).cxx_destruct;
- (void)insertMention:(id)arg1 range:(struct _NSRange)arg2 jid:(id)arg3;
- (void)textStorageDidStopEditingMention:(id)arg1;
- (void)textStorage:(id)arg1 didEditMentionInRange:(struct _NSRange)arg2;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)textStorage:(id)arg1 didChangeSelectedRange:(struct _NSRange)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)dictationRecordingDidEnd;
- (void)dictationRecognitionFailed;
- (void)menuControllerWillHideMenu:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)willShowMenuControllerForBubbleTableViewCell;
- (void)menuControllerDidHideMenu:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)selectedAttributedStringForPasteboard;
- (void)setContentOffset:(struct CGPoint)arg1;
@property(retain, nonatomic) UIColor *formattingSymbolColor;
- (void)scrollToBottomAnimated:(_Bool)arg1;
@property(copy, nonatomic) WARichText *richText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)scrollToVisibleRangeAfterDelay:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateTextViewMetrics;
- (void)setContentSize:(struct CGSize)arg1;
- (double)bestHeightForAttributedText:(id)arg1 inSize:(struct CGSize)arg2 lastLineRect:(struct CGRect *)arg3;
- (double)bestHeightForAttributedText:(id)arg1;
- (double)bestHeightForText:(id)arg1 inSize:(struct CGSize)arg2 textAlignment:(long long)arg3 lastLineRect:(struct CGRect *)arg4;
- (double)bestHeightForText:(id)arg1 inSize:(struct CGSize)arg2;
- (double)bestHeightForText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)bestHeightForCurrentTextInSize:(struct CGSize)arg1;
- (double)bestHeightForCurrentText;
- (struct CGRect)frameOfSelectedRange;
- (void)logMetrics;
- (id)caretView;
- (id)textInputContextIdentifier;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (void)setTextColor:(id)arg1;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (void)wa_replacePrompt:(id)arg1;
- (void)adjustRangeToHideMenuController;
- (void)didChangeFormat;
- (void)format_applyMonospace:(id)arg1;
- (void)format_applyStrikeThrough:(id)arg1;
- (void)format_applyItalic:(id)arg1;
- (void)format_applyBold:(id)arg1;
- (void)attributeSelectedRangeWithSymbol:(id)arg1;
- (struct _NSRange)returnNewRangeAndChangeFormattingWithRange:(struct _NSRange)arg1 symbol:(id)arg2;
- (struct _NSRange)formattingSymbolRangeAtIndex:(unsigned long long)arg1 attributedString:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UITextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

