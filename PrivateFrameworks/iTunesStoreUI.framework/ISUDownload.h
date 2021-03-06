/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL, SSDownload;

@interface ISUDownload : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownload *_download;
}

@property(readonly) NSString * artistName;
@property(readonly) long long bytesDownloaded;
@property(readonly) long long bytesTotal;
@property(getter=isContentRestricted,readonly) BOOL contentRestricted;
@property(readonly) double estimatedSecondsRemaining;
@property(retain) SSDownload * managedDownload;
@property(getter=isPausable,readonly) BOOL pausable;
@property(readonly) double percentComplete;
@property(readonly) NSString * phaseIdentifier;
@property(getter=isPurchase,readonly) BOOL purchase;
@property(readonly) NSString * statusDescription;
@property(readonly) NSNumber * storeItemIdentifier;
@property(readonly) NSNumber * storePreorderIdentifier;
@property(readonly) NSURL * thumbnailImageURL;
@property(readonly) NSString * title;

+ (id)downloadExternalProperties;
+ (id)downloadProperties;
+ (void)initialize;

- (id)artistName;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)copyLocalizedStatusString;
- (void)dealloc;
- (double)estimatedSecondsRemaining;
- (id)initWithManagedDownload:(id)arg1;
- (BOOL)isContentRestricted;
- (BOOL)isPausable;
- (BOOL)isPurchase;
- (id)managedDownload;
- (double)percentComplete;
- (id)phaseIdentifier;
- (void)resetPreorderState;
- (void)setManagedDownload:(id)arg1;
- (id)statusDescription;
- (id)storeItemIdentifier;
- (id)storePreorderIdentifier;
- (id)thumbnailImageURL;
- (id)title;

@end
