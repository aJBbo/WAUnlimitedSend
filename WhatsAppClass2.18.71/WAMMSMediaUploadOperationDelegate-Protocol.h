//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError, WAMMSAsyncResumeCheckResult, WAMMSMediaTransferOperationAsset, WAMMSMediaUploadOperation, WAMMSMediaUploadOperationResult, WAMediaKey, WamEventMediaUpload, WamEventMediaUpload2;

@protocol WAMMSMediaUploadOperationDelegate
- (WAMMSAsyncResumeCheckResult *)uploadTask:(WAMMSMediaUploadOperation *)arg1 canSkipUploadWithMediaType:(unsigned long long)arg2 encHash:(NSData *)arg3 plaintextHash:(NSData *)arg4;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 willRetryWithUploadEvent:(WamEventMediaUpload *)arg2 uploadEvent2:(WamEventMediaUpload2 *)arg3;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 didFinishWithResult:(WAMMSMediaUploadOperationResult *)arg2 uploadEvent:(WamEventMediaUpload *)arg3 uploadEvent2:(WamEventMediaUpload2 *)arg4 error:(NSError *)arg5 terminal:(_Bool)arg6;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 willBeginUploadWithMediaKey:(WAMediaKey *)arg2 ciphertextHash:(NSData *)arg3;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 needUploadReadyAssetFromAsset:(WAMMSMediaTransferOperationAsset *)arg2 completion:(void (^)(WAMMSMediaTransferOperationAsset *, WAMediaKey *, _Bool))arg3;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 didUpdateProgress:(double)arg2;
@end

