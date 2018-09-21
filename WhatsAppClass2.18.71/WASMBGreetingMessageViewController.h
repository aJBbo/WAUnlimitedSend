//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WASMBAutomaticMessageAudienceViewControllerDelegate-Protocol.h"
#import "WATextInputViewControllerDelegate-Protocol.h"

@class NSString, UISwitch, WASMBAutomaticMessageAudienceConfig, WATableRow, WATableSection;

__attribute__((visibility("hidden")))
@interface WASMBGreetingMessageViewController : WAStaticTableViewController <WATextInputViewControllerDelegate, WASMBAutomaticMessageAudienceViewControllerDelegate>
{
    WATableSection *_switchSection;
    WATableSection *_audienceSection;
    WATableSection *_messageSection;
    WATableRow *_rowSwitch;
    WATableRow *_rowAudience;
    WATableRow *_rowMessageContent;
    UISwitch *_enableSwitch;
    NSString *_message;
    WASMBAutomaticMessageAudienceConfig *_audienceConfig;
}

- (void).cxx_destruct;
- (void)audienceViewController:(id)arg1 didUpdateWithConfig:(id)arg2;
- (id)defaultGreetingMessage;
- (void)saveConfig;
- (id)messageContentTitle;
- (void)textInputControllerDidCancel:(id)arg1;
- (void)textInputController:(id)arg1 didFinishWithText:(id)arg2;
- (void)editMessage;
- (void)updateAudience;
- (void)updateSwitchWithAnimation:(_Bool)arg1;
- (void)updateSwitch;
- (void)setUpTableView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
