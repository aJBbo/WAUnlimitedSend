//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

@class NSArray;
@protocol WAAddressBookPropertyPickerDelegate;

__attribute__((visibility("hidden")))
@interface WAAddressBookPropertyPicker : WATableViewController
{
    NSArray *_propertyGroups;
    NSArray *_properties;
    id <WAAddressBookPropertyPickerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAAddressBookPropertyPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)cancelAction:(id)arg1;
- (void)viewDidLoad;
- (void)setupFieldData;
- (id)initWithDelegate:(id)arg1;

@end

