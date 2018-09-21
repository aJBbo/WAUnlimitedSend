//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface GPBCodedOutputStream : NSObject
{
    struct GPBOutputBufferState state_;
    NSMutableData *buffer_;
}

+ (id)streamWithData:(id)arg1;
+ (id)streamWithOutputStream:(id)arg1;
- (void)writeRawLittleEndian64:(long long)arg1;
- (void)writeRawLittleEndian32:(int)arg1;
- (void)writeRawVarint64:(long long)arg1;
- (void)writeRawVarintSizeTAs32:(unsigned long long)arg1;
- (void)writeRawVarint32:(int)arg1;
- (void)writeTag:(unsigned int)arg1 format:(int)arg2;
- (void)writeRawPtr:(const void *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (void)writeRawData:(id)arg1;
- (void)writeRawByte:(unsigned char)arg1;
- (void)flush;
- (void)writeRawMessageSetExtension:(int)arg1 value:(id)arg2;
- (void)writeMessageSetExtension:(int)arg1 value:(id)arg2;
- (void)writeUnknownGroupArray:(int)arg1 values:(id)arg2;
- (void)writeGroupArray:(int)arg1 values:(id)arg2;
- (void)writeBytesArray:(int)arg1 values:(id)arg2;
- (void)writeMessageArray:(int)arg1 values:(id)arg2;
- (void)writeStringArray:(int)arg1 values:(id)arg2;
- (void)writeEnumArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeBoolArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSFixed32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSFixed64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeFixed32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeFixed64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeUInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeUInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeFloatArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeDoubleArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;
- (void)writeSInt64:(int)arg1 value:(long long)arg2;
- (void)writeSInt64NoTag:(long long)arg1;
- (void)writeSInt32:(int)arg1 value:(int)arg2;
- (void)writeSInt32NoTag:(int)arg1;
- (void)writeSFixed64:(int)arg1 value:(long long)arg2;
- (void)writeSFixed64NoTag:(long long)arg1;
- (void)writeSFixed32:(int)arg1 value:(int)arg2;
- (void)writeSFixed32NoTag:(int)arg1;
- (void)writeEnum:(int)arg1 value:(int)arg2;
- (void)writeEnumNoTag:(int)arg1;
- (void)writeUInt32:(int)arg1 value:(unsigned int)arg2;
- (void)writeUInt32NoTag:(unsigned int)arg1;
- (void)writeBytes:(int)arg1 value:(id)arg2;
- (void)writeBytesNoTag:(id)arg1;
- (void)writeMessage:(int)arg1 value:(id)arg2;
- (void)writeMessageNoTag:(id)arg1;
- (void)writeUnknownGroup:(int)arg1 value:(id)arg2;
- (void)writeUnknownGroupNoTag:(int)arg1 value:(id)arg2;
- (void)writeGroup:(int)arg1 value:(id)arg2;
- (void)writeGroupNoTag:(int)arg1 value:(id)arg2;
- (void)writeString:(int)arg1 value:(id)arg2;
- (void)writeStringNoTag:(id)arg1;
- (void)writeBool:(int)arg1 value:(_Bool)arg2;
- (void)writeBoolNoTag:(_Bool)arg1;
- (void)writeFixed32:(int)arg1 value:(unsigned int)arg2;
- (void)writeFixed32NoTag:(unsigned int)arg1;
- (void)writeFixed64:(int)arg1 value:(unsigned long long)arg2;
- (void)writeFixed64NoTag:(unsigned long long)arg1;
- (void)writeInt32:(int)arg1 value:(int)arg2;
- (void)writeInt32NoTag:(int)arg1;
- (void)writeInt64:(int)arg1 value:(long long)arg2;
- (void)writeInt64NoTag:(long long)arg1;
- (void)writeUInt64:(int)arg1 value:(unsigned long long)arg2;
- (void)writeUInt64NoTag:(unsigned long long)arg1;
- (void)writeFloat:(int)arg1 value:(float)arg2;
- (void)writeFloatNoTag:(float)arg1;
- (void)writeDouble:(int)arg1 value:(double)arg2;
- (void)writeDoubleNoTag:(double)arg1;
- (id)initWithOutputStream:(id)arg1 data:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithOutputStream:(id)arg1;
- (void)dealloc;

@end

