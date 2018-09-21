//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, UITableViewCell, UITextView;
@protocol WAStatusEditControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAStatusEditController : WATableViewController <UITextViewDelegate>
{
    double _keyboardHeight;
    UITableViewCell *_textViewCell;
    UITextView *_textView;
    _Bool _editingMode;
    id <WAStatusEditControllerDelegate> _delegate;
    NSString *_preloadedStatusText;
}

@property(nonatomic) _Bool editingMode; // @synthesize editingMode=_editingMode;
@property(copy, nonatomic) NSString *preloadedStatusText; // @synthesize preloadedStatusText=_preloadedStatusText;
@property(nonatomic) __weak id <WAStatusEditControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)fixContentOffset;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)saveAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateNavigationBar;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

