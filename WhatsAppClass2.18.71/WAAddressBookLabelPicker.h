//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, UITableViewCell, UITextField, WAContactProperty;
@protocol WAAddressBookLabelPickerDelegate;

__attribute__((visibility("hidden")))
@interface WAAddressBookLabelPicker : WATableViewController <UITextFieldDelegate, UIScrollViewDelegate>
{
    NSArray *_predefinedLabels;
    UITableViewCell *_textFieldCell;
    UITextField *_textField;
    NSString *_textFieldDefaultText;
    WAContactProperty *_contactProperty;
    id <WAAddressBookLabelPickerDelegate> _delegate;
}

+ (id)pickerWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WAAddressBookLabelPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

