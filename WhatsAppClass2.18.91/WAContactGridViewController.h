//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "WAContactGridCellDelegate-Protocol.h"

@class NSString, WAContactGridCellConfiguration, WAContactGridFlowLayout;
@protocol WAContactGridViewControllerDataSource, WAContactGridViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAContactGridViewController : UICollectionViewController <WAContactGridCellDelegate>
{
    int _deleteAnimationCount;
    id <WAContactGridViewControllerDelegate> _delegate;
    id <WAContactGridViewControllerDataSource> _dataSource;
    WAContactGridCellConfiguration *_cellConfiguration;
}

@property(nonatomic) int deleteAnimationCount; // @synthesize deleteAnimationCount=_deleteAnimationCount;
@property(retain, nonatomic) WAContactGridCellConfiguration *cellConfiguration; // @synthesize cellConfiguration=_cellConfiguration;
@property(nonatomic) __weak id <WAContactGridViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WAContactGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionViewIndexPathForContactIndex:(unsigned long long)arg1;
- (long long)contactIndexForCollectionViewIndexPath:(id)arg1;
- (long long)indexOfContactsSection;
- (long long)numberOfSections;
- (void)deleteButtonTappedInContactGridCell:(id)arg1;
- (void)deleteContactAtIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)insertContactAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) WAContactGridFlowLayout *contactGridFlowLayout;
- (double)preferredHeightForNumberOfRows:(long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScrollDirection:(long long)arg1 cellConfiguration:(id)arg2;
- (id)initWithScrollDirection:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

