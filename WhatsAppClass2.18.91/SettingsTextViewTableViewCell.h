//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextViewDelegate-Protocol.h"

__attribute__((visibility("hidden")))
@interface SettingsTextViewTableViewCell : UITableViewCell <UITextViewDelegate>
{
    // Error parsing type: , name: textView
    // Error parsing type: , name: placeholderLabel
    // Error parsing type: , name: characterLimit
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

