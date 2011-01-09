/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapSnapshotRequest, NSMutableArray, UIImage;



@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate>
{
    UIImage *_lastSnapshot;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
    struct BillingPointTracker { NSInteger x1; NSInteger x2; struct MapPoint { 
            NSInteger latitude_; 
            NSInteger longitude_; 
            NSInteger x_pixels_at_max_zoom_; 
            NSInteger y_pixels_at_max_zoom_; 
        } x3; NSInteger x4; NSInteger x5; unsigned char x6; } *_billingPointTracker;
}

@property(retain) MKMapSnapshotRequest *servingRequest;


- (id)init;
- (void)dealloc;
- (void)_processRequest;
- (void)_processRequestOnMainThread;
- (id)_composeSnapshotWithView:(id)arg1;
- (void)_respondWithSnapshot;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (void)flushRequestQueue;
- (id)servingRequest;
- (void)setServingRequest:(id)arg1;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(NSUInteger)arg2 size:(struct CGSize { float x1; float x2; })arg3 requester:(id)arg4 context:(id)arg5;
- (void)didDisplaySnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(NSUInteger)arg2 size:(struct CGSize { float x1; float x2; })arg3;

@end