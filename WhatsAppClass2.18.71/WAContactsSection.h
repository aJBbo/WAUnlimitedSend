//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WAContactsSection : NSObject
{
    NSString *_title;
    NSArray *_contacts;
    long long _numberOfContacts;
}

@property(nonatomic) long long numberOfContacts; // @synthesize numberOfContacts=_numberOfContacts;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;

@end

