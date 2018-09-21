//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaPickerBaseViewController.h"

@class WAMediaPickerLibraryController;

__attribute__((visibility("hidden")))
@interface WAMediaPickerLibraryViewController : WAMediaPickerBaseViewController
{
    _Bool _preparingToPresentAlbum;
    _Bool _libraryAvailable;
    WAMediaPickerLibraryController *_libraryController;
}

+ (id)controller;
@property(retain, nonatomic) WAMediaPickerLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

