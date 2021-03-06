/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPurchasableMediaDownloadOperationQueue, NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, SSDownloadHandler, SSDownloadManager, UIAlertView;

@interface MPPurchasableMediaDownloadManager : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIAlertView *_cellularDownloadAlertView;
    NSMutableArray *_cellularDownloadRequestCompletionHandlers;
    NSMutableSet *_cellularRestrictedAlertViews;
    SSDownloadHandler *_downloadHandler;
    SSDownloadManager *_downloadManager;
    MPPurchasableMediaDownloadOperationQueue *_downloadOperationQueue;
    NSObject<OS_dispatch_queue> *_downloadSessionQueue;
    NSMutableArray *_downloadSessions;
    NSMutableArray *_downloads;
    struct __CFDictionary { } *_downloadsByPurchaseOperation;
    struct __CFDictionary { } *_groupDownloadsByDownload;
}

@property(readonly) NSArray * downloadingItemPIDs;
@property(readonly) NSArray * downloads;

+ (BOOL)hasProperNetworkConditionsToPlayMedia;
+ (id)sharedManager;

- (void)_addDownloadsForMediaItems:(id)arg1 purchaseType:(int)arg2 options:(int)arg3 shouldCreatePurchaseOperation:(BOOL)arg4 withPurchaseHandler:(id)arg5 completionHandler:(id)arg6;
- (void)_cancelAndCleanUpPurchasableDownload:(id)arg1;
- (void)_cancelPurchasesBatchedWithDownload:(id)arg1;
- (void)_cleanUpPurchasableDownload:(id)arg1;
- (void)_closeSessionForAsset:(id)arg1;
- (void)_dismissAndCleanupCellularDownloadAlertViewWithResult:(int)arg1;
- (id)_downloadSessionForAVAsset:(id)arg1;
- (id)_downloadSessionWithID:(id)arg1;
- (BOOL)_isNetworkSufficientForPlayback;
- (BOOL)_isSessionRequiredToPlayMediaItem:(id)arg1 hasDownloadIdentifier:(BOOL*)arg2;
- (void)_matchCellularRestrictedDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_newDownloadObserverForPurchasableMediaDownload:(id)arg1 purchaseHandler:(id)arg2 completionHandler:(id)arg3;
- (id)_newPurchasableMediaDownloadFromSSDownload:(id)arg1;
- (id)_openSessionWithProperties:(id)arg1 style:(int*)arg2;
- (id)_openSessionWithProperties:(id)arg1;
- (id)_purchaseOperationForMediaEntity:(id)arg1 purchaseType:(int)arg2 options:(int)arg3 isForPlayback:(BOOL)arg4;
- (BOOL)_showCellularRestrictedDialogForMediaItem:(id)arg1;
- (BOOL)_showNoNetworkDialogForMediaItem:(id)arg1;
- (void)addDownloadForMediaItem:(id)arg1 purchaseType:(int)arg2 options:(int)arg3 withPurchaseHandler:(id)arg4 completionHandler:(id)arg5;
- (void)addDownloadsForMediaItemCollection:(id)arg1 purchaseType:(int)arg2 options:(int)arg3 withPurchaseHandler:(id)arg4 completionHandler:(id)arg5;
- (void)addDownloadsForMediaItems:(id)arg1 purchaseType:(int)arg2 options:(int)arg3 withPurchaseHandler:(id)arg4 completionHandler:(id)arg5;
- (void)addDownloadsForMediaQuery:(id)arg1 purchaseType:(int)arg2 options:(int)arg3 withPurchaseHandler:(id)arg4 completionHandler:(id)arg5;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)canOpenSessionWithMediaItem:(id)arg1;
- (void)cancelDownloadForMediaItem:(id)arg1;
- (void)dealloc;
- (id)downloadForDownloadIdentifier:(unsigned long long)arg1;
- (id)downloadForFirstDownloadingMediaItemInCollection:(id)arg1;
- (id)downloadForMediaItem:(id)arg1;
- (id)downloadForMediaItemPersistentID:(unsigned long long)arg1;
- (id)downloadForStoreID:(long long)arg1;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)downloadingItemPIDs;
- (id)downloads;
- (id)downloadsBatchedWithDownload:(id)arg1;
- (id)init;
- (BOOL)isSessionRequiredToPlayMediaItem:(id)arg1;
- (id)openSessionWithMediaItem:(id)arg1;
- (void)purchaseOperation:(id)arg1 didFinishWithPurchase:(id)arg2 error:(id)arg3;
- (void)purchaseOperationDidCancel:(id)arg1;
- (void)requestPermissionToDownloadMediaWithPurchaseType:(int)arg1 completionHandler:(id)arg2;
- (BOOL)showNetworkConstraintDialogForMediaItem:(id)arg1;

@end
