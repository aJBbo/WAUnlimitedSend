//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface WAContactGridCellConfiguration : NSObject
{
    _Bool _deleteButtonHidden;
    _Bool _useFullContactName;
    _Bool _selectable;
    UIFont *_contactNameFont;
    struct CGSize _pictureSize;
    struct UIEdgeInsets _contentInset;
}

+ (id)defaultConfiguration;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) _Bool useFullContactName; // @synthesize useFullContactName=_useFullContactName;
@property(nonatomic) _Bool deleteButtonHidden; // @synthesize deleteButtonHidden=_deleteButtonHidden;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) struct CGSize pictureSize; // @synthesize pictureSize=_pictureSize;
@property(retain, nonatomic) UIFont *contactNameFont; // @synthesize contactNameFont=_contactNameFont;
- (void).cxx_destruct;

@end

