/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class AVRemaker, NSString;



@interface CKAVMediaObject : CKMediaObject 
{
    AVRemaker *_remaker;
    BOOL _remakeSuccessful;
    BOOL _remakeDidEnd;
    NSString *_createdFilename;
    double _approximateDuration;
}

@property BOOL remakeDidEnd;

+ (void)initialize;
+ (id)transcodeOptionsWithMaxBytes:(NSInteger)arg1 forMediaType:(NSInteger)arg2;
+ (void)_dequeueNextTranscodeOnMainThread;
+ (double)maxMMSTrimDurationForMediaType:(NSInteger)arg1;

- (void)dealloc;
- (void)_determineDurationOnMainThreadWithFile:(id)arg1;
- (void)_enqueueTranscodeOnMainThreadWithOptions:(id)arg1;
- (void)_beginRemakingOnMainThreadWithOptions:(id)arg1;
- (void)_remakeDidComplete:(id)arg1;
- (BOOL)remakeDidEnd;
- (void)setRemakeDidEnd:(BOOL)arg1;
- (id)fileForDataWithExtension:(id)arg1;
- (void)prepareForTranscode;
- (id)transcodePath;
- (id)transcodedFilename;
- (id)transcodeMimeType;
- (id)transcodedPathExtension;
- (double)transcodeStartTime;
- (double)transcodeEndTime;
- (double)transcodeDuration;
- (id)effectiveExportedFilename;
- (void)cleanupAfterTranscode;
- (BOOL)shouldTranscodeForMMS;
- (id)newTranscodingForMMSWithMaxByteLength:(NSInteger)arg1;
- (id)previewTitle;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (void)copyToPasteboard:(id)arg1;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;

@end