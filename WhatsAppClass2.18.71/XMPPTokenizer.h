//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface XMPPTokenizer : NSObject
{
    NSDictionary *_textToTokenDictionaries[240];
    NSDictionary *_tokenToTextDictionaries[240];
    NSSet *_JIDAttributeNames;
}

+ (id)webClientTokenizer;
+ (id)mainTokenizer;
- (void).cxx_destruct;
- (_Bool)isJIDAttributeName:(id)arg1;
- (id)convertTokenToText:(unsigned char)arg1 usingDictionaryType:(int)arg2;
- (id)convertTextToToken:(id)arg1;
- (void)setJIDAttributeNames:(id)arg1;
- (void)setTokenToTextDictionary:(id)arg1 forDictionaryType:(int)arg2;
- (void)setTextToTokenDictionary:(id)arg1 forDictionaryType:(int)arg2;
- (void)dealloc;
- (id)init;

@end

