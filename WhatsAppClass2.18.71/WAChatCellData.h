//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSpeechUtterance, NSArray, NSSet, NSString, WACachedCopyMutableArray, WAMessage, WAMessageContainer, WAMessageReplyContext;

__attribute__((visibility("hidden")))
@interface WAChatCellData : NSObject
{
    AVSpeechUtterance *_currentUtterance;
    WAMessageReplyContext *_replyContext;
    WAMessageContainer *_portraitMessageContainer;
    WAMessageContainer *_landscapeMessageContainer;
    WACachedCopyMutableArray *_messages;
    unsigned long long _lastVoiceOverMediaTransferStatus;
    _Bool _disallowMerging;
    _Bool _disallowBubbleHeader;
    _Bool _trusted;
    _Bool _mergedWithNextMessage;
    _Bool _mergedWithPreviousMessage;
    _Bool _searchResult;
    _Bool _dividerPTTOnly;
    float _pttPlayerProgress;
    unsigned long long _type;
    unsigned long long _style;
    unsigned long long _bubbleDirection;
    NSSet *_highlightedTerms;
    long long _dividerUnreadCount;
    unsigned long long _pttPlayerState;
    struct UIEdgeInsets _cellInsets;
}

@property(nonatomic) float pttPlayerProgress; // @synthesize pttPlayerProgress=_pttPlayerProgress;
@property(nonatomic) unsigned long long pttPlayerState; // @synthesize pttPlayerState=_pttPlayerState;
@property(nonatomic, getter=isDividerPTTOnly) _Bool dividerPTTOnly; // @synthesize dividerPTTOnly=_dividerPTTOnly;
@property(nonatomic) long long dividerUnreadCount; // @synthesize dividerUnreadCount=_dividerUnreadCount;
@property(nonatomic, getter=isSearchResult) _Bool searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSSet *highlightedTerms; // @synthesize highlightedTerms=_highlightedTerms;
@property(nonatomic) _Bool mergedWithPreviousMessage; // @synthesize mergedWithPreviousMessage=_mergedWithPreviousMessage;
@property(nonatomic) _Bool mergedWithNextMessage; // @synthesize mergedWithNextMessage=_mergedWithNextMessage;
@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
@property(nonatomic) unsigned long long bubbleDirection; // @synthesize bubbleDirection=_bubbleDirection;
@property(nonatomic) struct UIEdgeInsets cellInsets; // @synthesize cellInsets=_cellInsets;
@property(nonatomic) _Bool disallowBubbleHeader; // @synthesize disallowBubbleHeader=_disallowBubbleHeader;
@property(nonatomic) _Bool disallowMerging; // @synthesize disallowMerging=_disallowMerging;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *voiceOverStringForMediaUploadOrDownloadStatus;
@property(readonly, nonatomic) NSString *accessibilityHintText;
@property(readonly, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic, getter=isTransferringMedia) _Bool transferringMedia;
@property(readonly, nonatomic) _Bool containsUndownloadedMedia;
@property(readonly, nonatomic) float mediaTransferProgress;
@property(readonly, nonatomic) _Bool shouldAllowUserInteractionInProgressViewWhenNotTransferring;
@property(readonly, nonatomic) _Bool shouldAllowUserInteractionInProgressViewWhenTransferring;
@property(readonly, nonatomic) _Bool shouldShowProgressView;
- (id)currentMessageContainerForOrientation:(unsigned long long)arg1;
- (id)landscapeMessageContainerForDisplayStyle:(unsigned long long)arg1;
- (id)portraitMessageContainerForDisplayStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long displayStyle;
@property(readonly, nonatomic) unsigned long long tailDirection;
@property(readonly, nonatomic) double messageContainerBottomMargin;
@property(readonly, nonatomic) double messageContainerTopMargin;
- (double)preferredRowHeightForOrientation:(unsigned long long)arg1;
- (void)invalidateMessageStatusInMessageContainers;
- (void)invalidateMediaContentInMessageContainers;
- (void)invalidateMessageContainers;
- (id)messageContainerForDisplayStyle:(unsigned long long)arg1 orientation:(unsigned long long)arg2;
- (void)stopSpeakingContent;
- (void)startSpeakingContent;
- (_Bool)isSpeakingContent;
- (void)textToSpeechEngineDidFinishSpeechUtterance:(id)arg1;
- (void)textToSpeechEngineDidCancelSpeechUtterance:(id)arg1;
- (id)dividerText;
@property(readonly, nonatomic, getter=isSelectableInChatViewForwardMode) _Bool selectableInChatViewForwardMode;
@property(readonly, nonatomic, getter=isSelectableInChatViewDeleteMode) _Bool selectableInChatViewDeleteMode;
@property(readonly, nonatomic) _Bool shouldShowOptionToSaveToCameraRoll;
- (_Bool)canBeForwarded:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canBeForwarded;
@property(readonly, nonatomic) _Bool canBeQuickForwarded;
- (void)removeMessagesAtIndexes:(id)arg1;
- (void)appendMessage:(id)arg1;
- (_Bool)canAppendMessage:(id)arg1;
- (void)prependMessage:(id)arg1;
- (_Bool)canPrependMessage:(id)arg1;
- (_Bool)canDoPartialMergeWithCellData:(id)arg1;
@property(readonly, nonatomic) _Bool needsAlertButton;
@property(readonly, nonatomic) WAMessage *message;
@property(readonly, copy, nonatomic) NSArray *messages;
- (void)dealloc;
- (id)initWithMessages:(id)arg1 highlightedTerms:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithType:(unsigned long long)arg1 style:(unsigned long long)arg2;

@end

