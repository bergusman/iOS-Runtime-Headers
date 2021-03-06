/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IURentalData, NSDictionary, NSLock, NSRunLoop;

@interface IULoadRentalDataOperation : NSOperation <SSRequestDelegate> {
    BOOL _didCheckOutKeys;
    NSLock *_lock;
    int _reason;
    IURentalData *_rentalData;
    NSDictionary *_rentalInformation;
    NSRunLoop *_runLoop;
}

@property(readonly) int loadReason;
@property(readonly) IURentalData * rentalData;
@property(readonly) NSDictionary * rentalInformation;

- (BOOL)_checkOutRentalKeys;
- (void)_delayedStopRunLoop:(id)arg1;
- (BOOL)_didCheckOutKeys;
- (id)_newRentalCheckoutRequest;
- (id)_rentalInformationFromMedia;
- (void)_runCheckoutRequest:(id)arg1;
- (id)_runLoop;
- (void)_setDidCheckOutKeys:(BOOL)arg1;
- (void)_setRentalInformation:(id)arg1;
- (void)_setRunLoop:(id)arg1;
- (void)_startCheckoutRequest:(id)arg1;
- (void)_stopRunLoop;
- (void)_timer:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithRentalData:(id)arg1 reason:(int)arg2;
- (id)initWithRentalData:(id)arg1;
- (int)loadReason;
- (void)main;
- (id)rentalData;
- (id)rentalInformation;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

@end
